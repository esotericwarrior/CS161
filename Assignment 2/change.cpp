/***********************************************************************
** Author: Tristan Santiago
** Date: 10/4/17
** Description: This program asks the user for a number of cents, from 0
** to 99, and outputs how many of each type of coin would represent that
** amount with the fewest total number of coins.
***********************************************************************/
#include <iostream>
using namespace std;
main ()
{
	// Define change variable
	int change;
	
	// Define integer variables
	int quarters, dimes, nickels, pennies;

	// Prompt user to enter amount
	cout << "Please enter an amount in cents less than a dollar.\n";
	cin >> change;

	// Calculate the amount of coins
	quarters = change/25;
	change = change%25;
	dimes = change/10;
	change = change%10;
	nickels = change/5;
	change = change%5;
	pennies = change/1;
	change = change%1;

	// Display the amount of coins to user
	cout << "Your change will be:\n";
	cout << "Q: " << quarters << endl;
	cout << "D: " << dimes << endl;
	cout << "N: " << nickels << endl;
	cout << "P: " << pennies << endl;
	return 0;
}
