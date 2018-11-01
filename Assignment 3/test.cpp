#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
	int numIntegers;	// Number of integers user wants to enter
	int someVar1;		// User's first integer
	int someVar2;		// User's second variable
	int min;		// Lowest integer entered by user
	int max;		// Highest integer entered by user

// Ask user how many integers they would like to enter
cout << "How many integers would you like to enter?" << endl;
// Assign the user's input to numIntegers (assuming <= 1)
cin >> numIntegers;

// Prompt user to enter integer(s)
cout << "Please enter " << numIntegers << " integers." << endl;

// Loop must start here
// Get the user's first integer
cin >> someVar1;

// This is the user's first integer
// Set this integer as both min and max
min = someVar1;
max = someVar1;

// Get the user's second integer
cin >> someVar2;

// Compare the integers
	if (someVar1 > someVar2)
	{
		min = someVar2;
		max = someVar1;
	}
	
	else (someVar1 < someVar2)
	{
		min = someVar1;
		max = someVar2;
	}

// Display the minimum and maximum numbers entered by the user
cout << "Min: " << min << endl;
cout << "Max: " << max << endl; 

return 0;
}
