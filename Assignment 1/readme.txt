Project 1.a

Use a terminal emulator to log into the school server (flip).  Type ls to list the contents of the directory you're in.  Type ls -l for more information about each file.  Create a new directory called "week1" by typing mkdir week1.  Go into that directory by typing cd week1 (you can get back out of it by typing cd .. which moves you up one level from your current directory).  Use vim (or emacs or nano) to make a file named animal.cpp.  Type the following code into the file:

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
Add a comment block at the top as discussed in the Code Style Guidelines.  Now save the file.  Type ls to verify that this directory now contains a file named animal.cpp.  Next type g++ animal.cpp -o animal.  This will compile your source file and create an executable file named "animal".  The -o flag lets you choose a name for the executable file.  If you instead just type g++ animal.cpp, the name of the executable file will be "a.out".  It is important that you do not accidentally give your executable file the same name as the source file.  If you do that, then your executable file will replace your source file and your source file will be gone (and you will be sad).  Now type in ./animal.  The program should now ask you to enter the name of your favorite animal, and after you do, it will print out "Your favorite animal is the <whatever you typed>."  Note that this program only reads the first word of the input, so if the animal name contains any spaces, the full name won't be printed out.

Once you have verified that your program compiles and runs correctly, you need to transfer your source file, "animal.cpp", from the school server to your home computer (if you didn't need to make any changes on flip to get your program to work, this step isn't necessary).  Now log in to Mimir and upload your animal.cpp file.  Do not include your executable file as part of your submission.  In this course you will only submit your source files.

Project 1.b

Using program 1-1 on page 9 of the textbook as a guide, write a program that calculates how much a garden center needs to spend for a flower garden display.  The program should prompt the user to enter the cost of the soil, the flower seeds, and the fence.  It should then calculate and display the total cost.  You do not need to format the output to show two decimal places.

Example of program execution (the first three numbers shown are input entered by the user):

What does the soil cost?
10.50
What do the flower seeds cost?
4.75
What does the fence cost?
18.00
The total cost is 33.25
Your testing of your assignments should not be limited to any examples I provide.  You should run other tests on your code, because I will.

The file must be named gardenCost.cpp.