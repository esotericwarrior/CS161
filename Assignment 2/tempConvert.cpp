/*************************************************
** Author: Tristan Santiago
** Date: 10/3/17
** Description: This program converts Celsius
** to Fahrenheit.
 ***********************************************/
#include<iostream>
using namespace std;

int main()
{
	float fahrenheit, celsius;

	// Prompt user to enter temperature in Celsius
	cout << "Please enter a Celsius temperature." << endl;
	cin >> celsius;

	// Convert Celsius to Fahrenheit
	fahrenheit = (celsius * 9.0) / 5.0 + 32;
	
	// Display the temperature in Fahrenheit
	cout << "The equivalent Fahrenheit temperature is:\n" << fahrenheit << endl;
	return 0;
}
