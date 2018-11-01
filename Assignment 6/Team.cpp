/************************************************************
 * Name: Tristan Santiago				    *
 * Date: November 1, 2017				    *
 * Description: This is Team.cpp. It includes Player class  *
 * methods. It also contains the get and set methods from   *
 * the Team class, as well as the Team constructor.	    *
 ***********************************************************/
#include "Team.hpp"
using std::string;


// Team constructor that initializes p1, p2, p3, p4, and p5 to
// each position, so that they can be called later in the program.
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
        pointGuard = p1;
        shootingGuard = p2;
        smallForward = p3;
        powerForward = p4;
        center = p5;
}

// Get method for point guard.
Player Team::getPointGuard()
{
        return pointGuard;
}

// Get method for shooting guard.
Player Team::getShootingGuard()
{
        return shootingGuard;
}

// Get method for small forward.
Player Team::getSmallForward()
{
        return smallForward;
}

// Get method for power forward.
Player Team::getPowerForward()
{
        return powerForward;
}

// Get method for center.
Player Team::getCenter()
{
        return center;
}

// Set method for point guard.
void Team::setPointGuard(Player p)
{
        pointGuard = p;
}

// Set method for shooting guard.
void Team::setShootingGuard(Player p)
{
        shootingGuard = p;
}

// Set method for small forward.
void Team::setSmallForward(Player p)
{
        smallForward = p;
}

// Set method for power forward.
void Team::setPowerForward(Player p)
{
        powerForward = p;
}

// Set method for center.
void Team::setCenter(Player p)
{
        center = p;
}

int Team::totalPoints() // The sum of all points by all players.
{
return
(pointGuard.getPoints()+shootingGuard.getPoints()+smallForward.getPoints()+powerForward.getPoints()+center.getPoints());
}

// int main testing
/*int main()
 {
	Player center("Center", 10, 12, 15);
	
	Player pg("Point_Guard", 20, 15, 11);

 	Player sg("shooting_guard", 5, 12, 5);

 	Player sf("small_forward", 5, 12, 5);

 	Player pf("Power_forward", 31, 3, 5);

	Team team1(pg, sg, sf, pg, center);

	cout << "\nTotal Points of team : " << team1.totalPoints() << endl;

	return 0;
 }*/

