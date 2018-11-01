/**********************************************************
** Author: Tristan Santiago
** Date: 10/3/17
** Description: This program asks the user for five numbers
** and prints out the average of those numbers.
* ********************************************************/
#include <iostream>
using namespace std;
int main()
{
	double varOne, varTwo, varThree, varFour, varFive, total, average;

	// Prompt user to enter five numbers.
	cout << "Please enter five numbers." << endl;
	cin >> varOne;
	cin >> varTwo;
	cin >> varThree;
	cin >> varFour;
	cin >> varFive;

	//Calculate the total.
	total = varOne + varTwo + varThree + varFour + varFive;

	//Calculate the average.
	average = total / 5;

	// Display the average.
	cout << "The average of those numbers is:\n" << average << endl;
	return 0;
}
