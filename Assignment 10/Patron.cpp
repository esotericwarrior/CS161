/*********************************************************
 * Author: Tristan Santiago                              *
 * Date: November 30, 2017                               *
 * Description: Defines the methods for later use in the *
 * program.                                              *
 ********************************************************/
#include <string>
#include <vector>
#include "Patron.hpp"
using std::string;
using std::vector;

/*********************************************************
 * Patron::Patron(std::string idn, std::string n)        *
 * Initialize to user input.                             *
*********************************************************/ 
Patron::Patron(std::string idn, std::string n)
{
    idNum = idn;        // Set ID Number to user's input value.
    name = n;           // Set name to user's input value.
    fineAmount = 0;     // Initialize the fine amount to 0.
}

/*********************************************************
 *             Patron::getIdNum()                        *
 * Returns a patron's ID number.                         *
*********************************************************/ 
string Patron::getIdNum()
{
    return idNum;
}

/*********************************************************
 *             Patron::getName()                         *
 * Returns a patron's name.                              *
 ********************************************************/ 
string Patron::getName()
{
    return name;
}

/*********************************************************
 *             Patron::getCheckedOutBooks()              *
 * Returns a vector of pointers to user's checked out    *
 * books.                                                *
 ********************************************************/ 
vector<Book*> Patron::getCheckedOutBooks()
{
    return checkedOutBooks;
}

/*********************************************************
 *             Patron::addBook(Book* b)                  *
 * Add a book to a user's checked out books by searching *
 * for pointer to book and erasing it.                   *
 ********************************************************/ 
void Patron::addBook(Book* b)
{
    checkedOutBooks.push_back(b);
}

/*********************************************************
                Patron::removeBook(Book* b)
    Remove a book from a user's checked out books by
    searching for pointer to book, and erasing it
*********************************************************/ 
void Patron::removeBook(Book* b)
{
    for (int i = 0; i < checkedOutBooks.size(); i++)    // Was an unsigned int before.
    {
        if (checkedOutBooks[i] == b)
        {
            checkedOutBooks.erase(checkedOutBooks.begin() + i);
        }
    }
}

/*********************************************************
 *             Patron::getFineAmount()                   *
 * Returns a user's current fine amount.                 *
 ********************************************************/ 
double Patron::getFineAmount()
{
    return fineAmount;
}

/*********************************************************
 *             Patron::amendFine(double amount)          *
 * Amend a user's fine: a positive argument increase the *
 * fine amount, and a negative amount decreases fine     *
 * amount.                                               *
 ********************************************************/ 
void Patron::amendFine(double amount)
{
    fineAmount+=amount;       
}