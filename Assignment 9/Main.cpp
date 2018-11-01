//#include "Board.hpp"
#include "T3Reader.hpp"
#include <iostream>
/*using std::cout;
using std::cin;
using std::string;*/
//using namespace std;

/********************************
 * Mimir Test?			*
 *******************************/
using std::cout;
using std::endl;

int main()
{
T3Reader game('o');
bool test = game.readGameFile("tictactoe.txt");
if (test)
  cout << "pass\n";
else
  cout << "fail\n";

   return 0;
}


/*int main()
{
	T3Reader gamePlay('X');
	string filename;	// Holds the user entered file name.

	// Prompt the user to enter the data file name.
	cout << "\nEnter the file name: ";
	cin >> filename;
	bool result = gamePlay.readGameFile(filename);
	if(!result)
	cout << "\nInvalid moves in file";
}*/
