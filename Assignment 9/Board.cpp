/****************************************************************
 * Author: Tristan Santiago					*
 * Date: November 24, 2017					*
 * Description: Board.cpp include Board.hpp and initializes an	*
 * empty 2D array to be used as the game board. It also defines *
 * the methods to check winners, player turns, and print the	*
 * game board.							*
 ***************************************************************/
#include "Board.hpp"
using std::cout;
using std::endl;

/****************************************************************
 *                      Default Constructor                     *
 * The default Constructor uses a nested for loop to cycle      *
 * through each element of the 2D array to set each element to  *
 * an empty space.                                              *
 ***************************************************************/
Board::Board()
{
// Loop for the first array.
        for(int i = 0; i < 3; i++)
                // Nested loop for the second array.
                for(int j = 0; j < 3; j++)
                        board[i][j] = ' '; // " " wouldn't compile
}

/****************************************************************
 *                      bool Board::makeMove                    *
 ***************************************************************/
bool Board::makeMove(int xCoord, int yCoord, char playerTurn)
{
        if(xCoord < 0 || xCoord > 2 || yCoord < 0 || yCoord > 2)
        {
        //cout << "Row1 " << xCoord << " Col1 " << yCoord;
                return false;
        }
        if(board[xCoord][yCoord] != ' ')
        {
                return false;
        }
        board[xCoord][yCoord] = playerTurn;
                return true;
}

/****************************************************************
 *                      gameState()                             *
 ***************************************************************/
Status Board::gameState()
{
//		Col 1  Col 2  Col3
//	Row 0  	[0][0]|[0][1]|[0][2]
//	Row 1	[1][0]|[1][1]|[1][2]
//	Row 2	[2][0]|[2][1]|[2][2]

        bool gameFinished = true;
        // If the game is finished, check to see if there is a winner.

        // Check for row or column wins.
        for(int i = 0; i < 3; i++)
        {
        if((board[i][0] == board[i][1]) && (board[i][0] == board[i][2])
	&& (board[i][0] == 'x'))
                return X_WON;
        if((board[i][0] == board[i][1]) && (board[i][0] == board[i][2])
	&& (board[i][0] == 'o'))
                return O_WON;
        if((board[0][i] == board[1][i]) && (board[0][i] == board[2][i])
	&& (board[0][i] == 'x'))
                return X_WON;
        if((board[0][i] == board[1][i]) && (board[0][i] == board[2][i])
	&& (board[0][i] == 'o'))
                return O_WON;
        }

        // Check for diagonal wins.
        if((board[0][0] == board[1][1]) && (board[0][0] == board[2][2])
	&& (board[0][0] == 'x'))
                return X_WON;
        if((board[0][0] == board[1][1]) && (board[0][0] == board[2][2])
	&& (board[0][0] == 'o'))
                return O_WON;
        if((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])
	&& (board[1][1] == 'x'))
                return X_WON;
        if((board[0][2] == board[1][1]) && (board[1][1] == board[2][0])
	&& (board[1][1] == 'o'))
                return O_WON;
        
         for(int i=0;i<3;i++)
        {
                for(int j=0;j<3;j++)
                {
                        if(board[i][j] != 'x' && board[i][j] !='o')
                        {
                                gameFinished = false;
                                break;
                        }
                }
        }
        if(!gameFinished)
        return UNFINISHED;
        return DRAW;
}

/****************************************************************
 *                      void Print()                            *
 * This method prints out the current board to the screen.      *
 ***************************************************************/
void Board::Print()
{
// Using the same looping that the default constructors uses.
        // Loop for the first array.
        for(int i = 0; i < 3; i++)
        // Braces necessary because we have more than one line of code in loop.
        {
                cout << endl;

                for(int j = 0; j < 3; j++)
                {
                        if(j==2)
                                cout << board[i][j] << " ";
                        else
                                cout << board[i][j] << " | ";
                }

                if(i!=2)        // If i is not equal to 2.
                        cout << "\n------------";
        }

        cout << "\n";
}
