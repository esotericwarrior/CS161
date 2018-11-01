/****************************************************************
 * Author: Tristan Santiago					*
 * Date: November 21, 2017					*
 * Description: Board.hpp provides definitions for all the 	*
 * variables and functions to be used in creating the game	*
 * as well as methods to be used later in the program.		*
 ***************************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP
#include <iostream>

// enum method that takes no parameters and stores the status of the game.
enum Status { X_WON, O_WON, DRAW, UNFINISHED };

/****************************************************************
 * 			class Board				*
 * This class creates a Board that represents a	tic-tac-toe	*
 * board with the use of a 3x3 array.				*
 ***************************************************************/
class Board
{

/****************************************************************
 * Define a two-dimensional array, using 2 size declarators.	*
 * The first one is for the number of rows, and the second is	*
 * for the number of columns.					*
 ***************************************************************/
	private:
		char board[3][3];	// Rows and columns

/****************************************************************
 * 			Default Constructor			*
 * Initializes the 3x3 array to being empty, representing an	*
 * empty game board.						*
 ***************************************************************/
	public:
		Board();

/****************************************************************
 * 			bool makeMove()				*
 * This method takes two ints and a char (either 'x' or 'o' as	*
 * parameters, representing the x and y coordinators of the	*
 * move and which player's turn it is. If that location is	*
 * unoccupied, makeMove will record the move and return true.	*
 * If the location is already occupied, makeMove will record	*
 * the move and return false.					*
 ***************************************************************/
bool makeMove(int xCoord, int yCoord, char);

// enum data type that checks the status of the game.
Status gameState();	// gameState() is what will be called in main.

/****************************************************************
 * 			void print()				*
 * This method prints out the current board to the screen.	*
 ***************************************************************/
void Print();
};

#endif
