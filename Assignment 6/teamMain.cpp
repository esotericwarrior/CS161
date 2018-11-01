/************************************************************
 * Name: Tristan Santiago				    *
 * Date: November 1, 2017				    *
 * Description: the main method				    *
 ***********************************************************/
#include "Team.hpp"
#include "Player.cpp"
#include <iostream>
#include <cmath>

//using namespace std;
using std::string;
using std::cout;
using std::endl;

/*
Team::Team(Player p1, Player p2, Player p3, Player p4, Player p5)
{
        pointGuard = p1;
        shootingGuard = p2;
        smallForward = p3;
        powerForward = p4;
        center = p5;
}

Player Team::getPointGuard()
{
        return pointGuard;
}

Player Team::getShootingGuard()
{
        return shootingGuard;
}

Player Team::getSmallForward()
{
        return smallForward;
}

Player Team::getPowerForward()
{
        return powerForward;
}

Player Team::getCenter()
{
        return center;
}

void Team::setPointGuard(Player p)
{
        pointGuard = p;
}
void Team::setShootingGuard(Player p)
{
        shootingGuard = p;
}

void Team::setSmallForward(Player p)
{
        smallForward = p;
}

void Team::setPowerForward(Player p)
{
        powerForward = p;
}

void Team::setCenter(Player p)
{
        center = p;
}

int Team::totalPoints() // sum of all points by all players
{
return
(pointGuard.getPoints()+shootingGuard.getPoints()+smallForward.getPoints()+powerForward.getPoints()+center.getPoints());
}
*/
int main()
{

//Player p1;
Player p1("Charlotte", 24, 10, 7);
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

//Player center("Center", 10, 12, 15);
//Player pg("Point_Guard", 20, 15, 11);
//Player sg("shooting_guard", 5, 12, 5);
//Player sf("small_forward", 5, 12, 5);
//Player pf("Power_forward", 31, 3, 5);
//Team team1(pg, sg, sf, pg, center);
//cout << "\nTotal Points of team : " << team1.totalPoints() << endl;
Team team1(p1, p2, p3, p4, p5);
cout << "\nTotal Points of team : " << team1.totalPoints() << endl;

Player p = team1.getShootingGuard();
cout << p.getName() << " is the Shooting Guard." << endl;

return 0;
}

