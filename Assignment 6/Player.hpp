/********************************************************************
 * Name: Tristan Santiago					    *
 * Date: November 1, 2017					    *
 * Description: This is the header file for the Player class. It    *
 * declares the Player class and  all necessary functions and 	    *
 * variables to be used in later programs for the assignment.	    *
 *******************************************************************/
#ifndef PLAYER_HPP
#define PLAYER_HPP
#include <string>
using std::string;

// Player class declaration
class Player
{
	private:
		string name;
		int points;
		int rebounds;
		int assists;
	public:
		Player();			// Default constructor
		Player(string, int, int, int);	// Constructor
		bool hasMorePointsThan(Player p);

		string getName();
		 
		int getPoints();
		int getRebounds();
		int getAssists();

		void setPoints(int);
		void setRebounds(int);
		void setAssists(int);

};

#endif
