/*********************************************************
 * Author: Tristan Santiago                              *
 * Date: November 30, 2017                               *
 * Description: Library.cpp includes the vast majority   *
 * of methods to be used for the program, including the  *
 * ways to check out, request, and return books. It also *
 * defines the method for paying fines for books that    *
 * are overdue.                                          *
 ********************************************************/
#include <string>
#include <vector>
#include <iostream>
#include "Library.hpp"
using std::string;
using std::vector;

/*********************************************************
 *          Library::Library()                           *
 * Default Constructor, sets date to 0                   *
 ********************************************************/ 
Library::Library()
{
    currentDate = 0;    
}

/*********************************************************
 *          void Library::addBook(Book* addBookIn)       *
 * Adds a book to the library's inventory                *
 ********************************************************/ 
void Library::addBook(Book* addBookIn)
{
    holdings.push_back(addBookIn);
}

/*********************************************************
 *       void Library::addPatron(Patron* addPatronIn)    *
 * Adds a patron to the Library's members.               *
 ********************************************************/ 
void Library::addPatron(Patron* addPatronIn)
{
    members.push_back(addPatronIn);
}

/***************************************************************
 *    string Library::checkOutBook(string pID, string bID)     *
 * Define the method for checking out books from the library.  *
 **************************************************************/ 
string Library::checkOutBook(string pID, string bID)
{
    Book* bookIn = getBook(bID);        // Uses ID code to point to book.
    Patron* patronIn = getPatron(pID);  // Uses ID number to point to patron.
    
    // Return NULL if getBook function is called for a book not in the library:
    if (bookIn == NULL)
    {
        //cout << "Book not found.\n";
        return "Book not found.";
    }
    
    // Return NULL is patron is not a member of the library:
    else if (patronIn == NULL)
    {
        //cout << "Patron not found.\n";
        return "Patron not found.";
    }
    
    // This function checks to see if a book currently checked out:
    else if (bookIn -> getLocation() == CHECKED_OUT)
    {
        //cout << "Book is already checked out.\n";
        return "Book is already checked out.";
    }
    
    // This function checks to see if a book is being held by another patron:
    else if (bookIn -> getRequestedBy() != NULL && bookIn -> getRequestedBy() != patronIn)
    {
        //cout << "Book is on hold by another patron.\n";
        return "Book is on hold by another patron.";
    }
    
    // If book is not checked out or on hold, then the book can be checked out:
    else
    {
        // If the patron checking out the book happens to be the same patron
        // that requested the book, we reset requestedBy():
        if (bookIn -> getRequestedBy() == patronIn)
        {
            bookIn -> setRequestedBy(NULL);
        }
        
        // Set check out parameters and the book's location:
        bookIn -> setCheckedOutBy(patronIn);
        bookIn -> setDateCheckedOut(currentDate);
        bookIn -> setLocation(CHECKED_OUT);
        
        patronIn -> addBook(bookIn);
        //cout << "Check out successful!!!\n";
        return "Check out successful.";
    }
}
/****************************************************************
*           string Library::returnBook(string bID)              *
* This method is used for returning books to the library.       *
****************************************************************/ 
string Library::returnBook(std::string bID)
{
    Book* bookIn = getBook(bID); // Points to book based on ID code.
    
    // GetBook returns NULL when book is not in holdings:
    if (bookIn == NULL) 
    {
        return "Book not found.";
    }
    
    // Check to see if the book is actually checked out:
    else if (bookIn->getLocation() != CHECKED_OUT) 
    {
        return "Book is on the shelf and not checked out.";
    }
    
    // If none of the above are true, the book can be returned:
    else {
        
        //Remove book from Patron's list of checked out books:
        bookIn->getCheckedOutBy()->removeBook(bookIn);
        
        // If the book has been requested, it is placed on the hold shelf:
        if (bookIn->getRequestedBy() != NULL) 
        {
            bookIn->setLocation(ON_HOLD_SHELF);
        }
        
        // If the book has not been requested, it goes back on the shelf:
        else 
        {
            bookIn->setLocation(ON_SHELF);
        }
        
        // Update checked out by:
        bookIn->setCheckedOutBy(NULL);
        return "Return successful.";
    }
}

/************************************************************
*           Library::requestBook(string pID, string bID)    *
* Method for requesting a book.                             *
************************************************************/ 
string Library::requestBook(string pID, string bID)
{
    Book* bookIn = getBook(bID); // pointer to book based on ID code.
    Patron* patronIn = getPatron(pID); // pointer to patron based on ID number.
    
    // GetBook returns NULL when book is not in the library:
    if (bookIn == NULL) 
    {
        return "Book not found.";
    }
    
    // GetPatron returns NULL when patron is not a member of the library:
    else if (patronIn == NULL) 
    {
        return "Patron not found.";
    }
    
    // Check to see if book has been requested by someone else:
    else if (bookIn->getRequestedBy() != NULL && bookIn->getRequestedBy() != patronIn) 
    {
        return "Book is on hold by another patron.";
    }
    
    // If book is in the library, the patron is a member, and the book hasn't
    // been requested by someone else:
    else 
    {
        // Update requested by:
        bookIn->setRequestedBy(patronIn);
        
        // If book is on shelf, move it to the hold shelf:
        if (bookIn->getLocation() == ON_SHELF) 
        {
            bookIn->setLocation(ON_HOLD_SHELF);
        }
        return "Request successful.";
    } 

}
/************************************************************
 *    string Library::payFine(string pID, double payment)   *
 * Define the method for allowing users to pay fines on     *
 * overdue library books.                                   *
 ***********************************************************/
string Library::payFine(string pID, double payment)
{
    Patron* patronIn = getPatron(pID); // Points to patron based on ID number.
    
    // getPatron returns NULL when patron is not a member of the library:
    if (patronIn == NULL) 
    {
        return "Patron not found.";
    }
    
    // Otherwise, apply payment to patron's account:
    else 
    {
        // Amend the fine by the negative of the payment amount:
        patronIn->amendFine(-payment);
        return "Payment successful.";
    }
}
/*********************************************************

*********************************************************/ 
void Library::incrementCurrentDate()
{
    const double dailyFine = 0.10; // Daily fine rate for overdue books.
    currentDate++; // Increment the date.
    
    // Loop over all members of the library:
    for (unsigned int j = 0; j < members.size(); j++) 
    {
        
        // Grab the books currently checked out by the given member:
        vector<Book*> patronBooks = members[j]->getCheckedOutBooks();
        
        // Loop over the members checked out books:
        for (unsigned int k = 0; k < patronBooks.size(); k++) 
        {
            
            // Calculate the number of days the book has been checked out:
            int numDaysCheckedOut = currentDate - patronBooks[k]->getDateCheckedOut();
            
            // If the book has been out longer than checkOutLength, apply fine:
            if (numDaysCheckedOut > patronBooks[k]->getCheckOutLength()) 
            {
                members[j]->amendFine(dailyFine);
            }
        }
    }
}
/*********************************************************

*********************************************************/ 
Patron* Library::getPatron(string pID)
{
    Patron* result = NULL; // Points to patron that has matching ID number.
    unsigned int j = 0; // Loop index counter.
    
    // Loop over library members to look for patron that has matching ID number:
    while (result == NULL && j < members.size()) 
    {
        
        // Check if ID numbers are equal:
        if (members[j]->getIdNum() == pID) 
        {
            result = members[j];
        }
        
        // Increment counter:
        j++;
    }
    return result;
}
/************************************************************
*           Book* Library::getBook(string bID)              *
* 
************************************************************/ 
Book* Library::getBook(string bID)
{
    Book* result = NULL; // Points to book that has matching ID code.
    
    unsigned int j = 0; // loop index counter
    
    // Loop over library holdings to look for book that has matching ID code:
    while (result == NULL && j < holdings.size()) 
    {
        // check if ID codes are equal:
        if (holdings[j]->getIdCode() == bID) 
        {
            result = holdings[j];
        }
        // increment counter:
        j++;
    }
    return result;
}