/****************************************************************
 * Author: Tristan Santiago					*
 * Date: November 24, 2017					*
 * Description: T3Reader.cpp defines all methods for reading	*
 * input from the files that will be used to store player moves	*
 * and determine the outcome of the game. It includes Board.hpp	*
 * and T3Reader.hpp.						*
 ***************************************************************/
#include "T3Reader.hpp"
#include <iostream>
#include <fstream>
using std::cout;
using std::string;
using std::endl;
using std::ofstream;
using std::ifstream;

T3Reader::T3Reader()
{
        playersTurn = 'x';
}


T3Reader::T3Reader(char playersTurn)
{
	T3Reader::playersTurn = playersTurn;
}

// Provide definition for the bool method readGamefile.

bool T3Reader::readGameFile(string filename)

{
	ifstream inputFile;
	
	inputFile.open(filename);

	if(!inputFile.is_open())
	
{

	cout << "Error in opening input file " << filename << endl;
	return false;

}

// Declare the variables for row and column.
int xCoord, yCoord;

//while(fs >> xCoord >> yCoord)
while(inputFile >> xCoord >> yCoord)
{

    	cout << "Current Player : " << playersTurn << " Move: " << xCoord
	<< " " << yCoord << endl;

	// If the game is over...
	if(board.gameState() != UNFINISHED)
	{
		cout << "Game is over and more moves are needed" <<
		" in file." << endl;

		inputFile.close();

		return false;

	}

	if(!board.makeMove(xCoord, yCoord, playersTurn))
	{

	cout << "That board position is already taken " << xCoord << " "
	<< yCoord << endl;

	inputFile.close();
	return false;
	}
	else
	{
		// If/else statement for switching players.
		if(playersTurn == 'x')

		playersTurn = 'o';

		else

       		playersTurn = 'x';

	}

	board.Print();

}

inputFile.close();

board.Print();

if(board.gameState() == UNFINISHED)

{
	cout << "The game is not over, because more moves are needed" <<
	" in the file."<< endl;

	return false;

}

if(board.gameState() == X_WON)

	cout << "x wins!" << endl;

else if(board.gameState() == O_WON)

	cout << "o wins!" << endl;

else
	cout << "It's a draw." << endl;

return true;

}
