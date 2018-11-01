/***********************************************************
** Author: Tristan Santiago
** Date: 10/12/17
** Description: This program asks the user how many integers
** they would like to enter and prompts them to enter that
** many integers. After all the numbers have been entered,
** the program displays the largest and smallest of those
** numbers.
***********************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{
int numIntegers;	// The total number of integers
int number;		// The current number being processed		
int min;		// Minimum number inputted
int max;		// Maximum number inputted
int counter = 2;	// Counter

cout << "How many integers would you like to enter?" << endl;
cin >> numIntegers;

cout << "Please enter " << numIntegers << " integers." << endl;
cin >> number;
max = number;
min = number;

while (counter <= numIntegers)
{
	cin >> number;	
		if (number > max)
		{
			max = number;
		}
		if (number < min)
		{
			min = number;
		}
	counter++;
}

cout << "min: " << min << endl;
cout << "max: " << max << endl;

return 0;

}
