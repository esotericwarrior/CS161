/****************************************************************
 * Author: Tristan Santiago					*
 * Date: November 23, 2017					*
 * Description: T3Reader.hpp includes Board.hpp and defines all *
 * variables and functions needed for the program.		*
 ***************************************************************/
#ifndef T3READER_HPP
#define T3READER_HPP
#include<fstream>
#include "Board.hpp"

using std::string;

class T3Reader
{
	private:
		Board board;		// Board object
		char playersTurn;	// Indicates the player's turn.
	public:
		T3Reader();	// Default Constuctor
		T3Reader(char playersTurn);	// Parameterized Constructor
		char turn;
		bool readGameFile(string filename); // Reads moves from file
};
#endif
