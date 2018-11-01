/********************************************************
 * Author: Tristan Santiago                             *
 * Date: November 30, 2017                              *
 * Description: Book.cpp defines necessary functions to *
 * be used later in the program.                        *
 *******************************************************/
#include "Book.hpp"
#include <string>
using std::string;

/********************************************************
    Book::Book(string idc, string t, string a)          *
* Here, we are initializing to the user's input.        *
********************************************************/ 
Book::Book(string idc, string t, string a)
{
    idCode= idc;    // Initialize ID code to the user's input value.
    title= t;       // Initialize title to the user's input value.
    author = a;     // Initialize author to the user's input value.
    
    // When we create new books, they aren't checked out to anyone, 
    // so we initialize to NULL
    checkedOutBy= NULL;
    
    // When we create new books, they aren't requested by anyone either,
    // so we also initialize to NULL.
    requestedBy= NULL;
    
    // The default location for all new books is on the shelf.
    //location = ON_SHELF;
    setLocation(ON_SHELF);
}

/********************************************************
*               Book::getCheckOutLength()               *
* This function simply returns the time amount of time  * 
* book has been checked out.                            *
********************************************************/ 
int Book::getCheckOutLength()
{
    return CHECK_OUT_LENGTH;
}

/********************************************************
*                   Book::getIdCode()                   *
* When called, this function returns the unique ID Code * 
* for a user specified book.                            *         
********************************************************/ 
string Book::getIdCode()
{
    return idCode;
}

/********************************************************
*                   Book::getAuthor()                   *
* When called, this function returns the author of a    *
* book specified by the user. However, unlike an ID     *
* Code, an author cannot be assumed to be unique, as    *
* the user may specify two different authors that have  *
* the same name.                                        *
********************************************************/ 
string Book::getAuthor()
{
    return author;
}

/********************************************************
*                   Book::getTitle()                    *
* When called, this function returns the title of a     *
* book, specified by the user. Like authors, book       *
* titles cannot be assumed to be unique.                *
********************************************************/ 
string Book::getTitle()
{
    return title;
}

/********************************************************
*                    Book::getLocation()                *
* This function returns the location of a book. All new *
* books are placed on the shelf, by default. However,   *
* their locations may be changed.                       *
********************************************************/ 
Locale Book::getLocation()
{
    return location;  // This still returns 0, despite being commented out?
}

/********************************************************
*            Book::setLocation(Locale inLocation)       *
* This is the setter function for a book's location.    *
* A book can only be in one of three different places:  *
* ON_SHELF, ON_HOLD_SHELF, or CHECKED_OUT.              *
********************************************************/ 
void Book::setLocation(Locale inLocation)
{

    location = inLocation;    
}

/********************************************************
*               Book::Patron* getCheckedOutBy()         *
* When a patron has a book checked out, this function   *
* returns the name of that patron when called, by       *
* pointing.                                             *
********************************************************/     
Patron* Book::getCheckedOutBy()
{
    return checkedOutBy;
}

/********************************************************
*       Book::setCheckedOutBy(Patron* checkOutByIn)     *
* This function sets a pointer to point to the patron   *
* that has checked out a user-specified book.           *
********************************************************/
void Book::setCheckedOutBy(Patron* checkOutByIn)
{
    checkedOutBy = checkOutByIn;
}

/********************************************************
*            Book::Patron* getRequestedBy()             *
* This function returns the pointer to the patron that  * 
* has requested a particular book.
********************************************************/ 
Patron* Book::getRequestedBy()
{
    return requestedBy;
}

/********************************************************
*        Book::setRequestedBy(Patron* setRequestedByIn) *
* This function sets the pointer to the patron that has *
* requested a book, then returns it.                    *
********************************************************/ 
// void Book::setRequestedBy(Patron* setRequestedByIn)
// {
//     setCheckedOutBy = setRequestedByIn;
// }
void Book::setRequestedBy(Patron* rbIn)
{
    requestedBy = rbIn;
    return;
}

/********************************************************
*           Book::getDateCheckedOut()                   *
* When called, this function returns the date that a    *
* book was checked out.                                 *
********************************************************/ 
int Book::getDateCheckedOut()
{
    return dateCheckedOut;
}

/********************************************************
*       Book::setDateCheckedOut(int dateCheckedOutIn)   *
* This function sets the date that a book was checked   *
* out.                                                  *
********************************************************/ 
void Book::setDateCheckedOut(int dateCheckedOutIn)
{
    dateCheckedOut= dateCheckedOutIn;
}