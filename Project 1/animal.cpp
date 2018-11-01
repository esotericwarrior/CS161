/*******************************************************
** Author: Tristan Santiago
** Date: 9/21/17
** Description: This program displays the user's favorite animal to the screen.
*******************************************************/

#include <iostream>
#include <string>


// a simple example program
 int main()
{
   std::string faveAnimal;
   std::cout << "Please enter your favorite animal." << std::endl;
   std::cin >> faveAnimal;
   std::cout << "Your favorite animal is the " << faveAnimal;
   std::cout << "." << std::endl;


   return 0;

}
