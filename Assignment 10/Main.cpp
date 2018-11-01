#include "Library.hpp"
#include <iostream>       //std::cin, std::cout
using namespace std;
int main()
{
   //Create a library
   Library lib;

   //Create a few books
   Book b1("123", "War and Peace", "Tolstoy");
   Book b2("234", "Moby Dick", "Melville");
   Book b3("345", "Phantom Tollbooth", "Juster");

   //Create a few patrons
   Patron p1("abc", "Felicity");
   Patron p2("bcd", "Waldo");
  
   //Add the books and patrons to the library
   lib.addBook(&b1);
   lib.addBook(&b2);
   lib.addBook(&b3);
   lib.addPatron(&p1);
   lib.addPatron(&p2);

   //Check out a book to Patron p2
   lib.checkOutBook("bcd", "234");

   cout << lib.checkOutBook("gfds", "123") << endl;

   //Increment 7 days
   for (int i = 0; i<7; i++)
   {
       lib.incrementCurrentDate();
   }

   //Check out books to Patrons p1 and p2
   lib.checkOutBook("bcd", "123");
   lib.checkOutBook("abc", "345");

   //Increment 24 days
   for (int i = 0; i<24; i++)
       lib.incrementCurrentDate();

   //Pay $0.40 to Patron p2's fine
   lib.payFine("bcd", 0.4);

   //Find out what each patron's fine is
   double p1Fine = p1.getFineAmount();
   double p2Fine = p2.getFineAmount();

   //Report on the fine amounts
   cout << p1.getName() << " has a fine of " << p1Fine << endl;
   cout << p2.getName() << " has a fine of " << p2Fine << endl;

   return 0;
}