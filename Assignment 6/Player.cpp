/********************************************************************
 * Name: Tristan Santiago					    *
 * Date: November 1, 2017					    *
 * Description: This is Player.cpp. It used the Player class to     *
 * initializes the default constructor and other functions to be    *
 * used later in Team.cpp.					    *
 *******************************************************************/
#include "Player.hpp"
#include <iostream>
#include <cmath>
using std::endl;
using std::cout;
using std::string;

/********************************************************************
 * 			Player::Player()			    *
 * This is the default constructor. It initializes the name to the  *
 * empty string (""). It also initializes points, rebounds, and     *
 * assists to -1.						    *
 *******************************************************************/
Player::Player()
{
	name = " ";
	points = -1;
	rebounds = -1;
	assists = -1;
}

/********************************************************************
 * 			Player::Player(string, int, int, int)	    *
 * This constructor takes four parameters and uses them to	    *
 * initialize the data members player, pts, reb, and ast.	    *						 			    	    *
 *******************************************************************/
Player::Player(string player, int pts, int reb, int ast)
{
	name = player;
	points = pts;
	rebounds = reb;
	assists = ast;
}

// Get method for points
int Player::getPoints()
{
	return points;
}

// Get method for rebounds.
int Player::getRebounds()
{
	return rebounds;
}

// Get method for assists.
int Player::getAssists()
{
	return assists;
}

// Get method for name.
string Player::getName()
{
	return name;
}

/********************************************************************
 * 			bool hasMorePointsThan(int)		    *
 * This method takes a Player parameter and returns true if the     *
 * player that is executing the function has more points than the   *
 * Player that was passed as a parameter. Otherwise, it returns	    *
 * false.							    *
 *******************************************************************/
bool Player::hasMorePointsThan(Player p)
{

	if (points > p.points)
	
		return true;
	else
		return false;
}

// Set method for points.
void Player::setPoints(int pts)
{
	points = pts;
}

// Set method for rebounds.
void Player::setRebounds(int reb)
{	
	rebounds = reb;
}

// Set method for assists.
void Player::setAssists(int ast)
{
	assists = ast;
}

/* Int Testing
int main()
{
//Player p1("Charlotte", 24, 10, 7);
Player p1;
Player p2("Emily", 21, 13, 9);
Player p3("Anne", 20, 10, 8);
Player p4("Jane", 19, 10, 10);
Player p5("Mary", 18, 11, 8);
//p5.setRebounds(12);

cout << "This is a work in progress." << endl;
cout << "\nPlayer 1: " << p1.getName() << endl;
cout << "Points: " << p1.getPoints() << endl;
cout << "Rebounds: " << p1.getRebounds() << endl;
cout << "Assists: " << p1.getAssists() << endl;

cout << "\nPlayer 2: " << p2.getName() << endl;
cout << "Points: " << p2.getPoints() << endl;
cout << "Rebounds: " << p2.getRebounds() << endl;
cout << "Assists: " << p2.getAssists() << endl;

cout << "\nPlayer 3: " << p3.getName() << endl;
cout << "Points: " << p3.getPoints() << endl;
cout << "Rebounds: " << p3.getRebounds() << endl;
cout << "Assists: " << p3.getAssists() << endl;

cout << "\nPlayer 4: " << p4.getName() << endl;
cout << "Points: " << p4.getPoints() << endl;
cout << "Rebounds: " << p4.getRebounds() << endl;
cout << "Assists: " << p4.getAssists() << endl;

cout << "\nPlayer 5: " << p5.getName() << endl;
cout << "Points: " << p5.getPoints() << endl;
cout << "Rebounds: " << p5.getRebounds() << endl;
cout << "Assists: " << p5.getAssists() << endl;

p5.setRebounds(12);
p5.setAssists(2);
p5.setPoints(0);
cout << "\nName: " << p5.getName() << endl;
cout << "Points: " << p5.getPoints() << endl;
cout << "Rebounds: " << p5.getRebounds() << endl;
cout << "Assists: " << p5.getAssists() << endl;

if (p1.hasMorePointsThan(p2))
cout << "p1 has more points" << endl;
else
cout << "p2 has more points" << endl;

if (p3.hasMorePointsThan(p4))
cout << "p3 has more points" << endl;
else
cout << "p4 has more points" << endl;

return 0;
}*/
