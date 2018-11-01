/************************************************************
** Author: Tristan Santiago
**
** Date: 10/12/17
**
** Description: This program prompts user to enter an
** integer for someone to guess. If the player's guess
** it higher than the target number, the program displays
** "Too high" and if it's too low, it displays "Too low."
** The program runs until the player guesses correctly,
** then displays how many tries it took to guess the number
************************************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{

int secretNum;
int guess;
int total = 0;

cout << "Enter the number for the player to guess." << endl;
cin >> secretNum;

cout << "Enter your guess." << endl;

// Start loop
do
{
	++total;
	cin >> guess;
	if (guess == secretNum)
	{
		cout << "You guessed it in " << total << " tries." << endl;
	}
	if (guess < secretNum)
	{
		cout << "Too low - try again." << endl;
	}
	else if (guess > secretNum)
	{
		cout << "Too high - try again." << endl;
	}
} while (guess != secretNum);

return 0;
}
