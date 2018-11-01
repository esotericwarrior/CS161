/********************************************************************
 * Author: Tristan Santiago					    *
 * Date: 10/26/17						    *
 * Description: Taxicab.cpp is the Taxicab class function 	    *
 * implementation file.						    *
 *******************************************************************/
#include "Taxicab.hpp"
#include <cmath>
#include <iostream>
using std::abs;

/***********************************
 * 	Taxicab::Taxicab()	   *
 * This is the default constructor.*
 **********************************/
Taxicab::Taxicab()
{
	xCoord = 0;
	yCoord = 0;
	distanceTraveled = 0;
}

/********************************************************************
 * 			Taxicab::Taxicab(int, int)		    *
 * This is the constructor.	   				    *
 ********************************************************************/
Taxicab::Taxicab(int xCoor, int yCoor)
{
	xCoord = xCoor;
	yCoord = yCoor;
	distanceTraveled = 0;
}

/********************************************************************
 * 			Taxicab::getXCoord			    *
 * This function returns the value in member variable XCoord.	    *
 *******************************************************************/
int Taxicab::getXCoord()
{
	return xCoord;
}

/********************************************************************
 * 			Taxicab::getYCoord			    *
 * This function returns the value in member variable YCoord.	    *
 *******************************************************************/
int Taxicab::getYCoord()
{
	return yCoord;
}

/********************************************************************
 * 			Taxicab::getDistanceTraveled		    *
 * This function returns the value in member variable		    *
 * distanceTraveled.						    *
 *******************************************************************/
//int Taxicab::getDistanceTraveled()
//{
//	return distanceTraveled;
//}

/********************************************************************
 * 			Taxicab::moveX				    *
 * This function calculates xCoord's move distance.		    *
 *******************************************************************/
void Taxicab::moveX(int X)
{
	//xCoord += X;
	// Calculate distance traveled.
	distanceTraveled += abs(X);
	// Calculate the new xCoordinate.
	xCoord += X;
}

/********************************************************************
 * 			Taxicab::moveY				    *
 * This function calculate yCoord's move distance.		    *
 *******************************************************************/
void Taxicab::moveY(int Y)
{
	//yCoord += dist;
	// Calculate distance traveled.
	distanceTraveled += abs(Y);
	// Calculate the new yCoordinate.
	yCoord += Y;
}

// Call getDistanceTraveled() function to return the total distance
// traveled.
int Taxicab::getDistanceTraveled()
{
	return distanceTraveled;
}
/*
int main()
{
	Taxicab cab1;
	Taxicab cab2(5, -8);
	cab1.moveX(3);
	cab1.moveY(-4);
	cab1.moveX(-1);
	cout << cab1.getDistanceTraveled() << endl;
	cab2.moveY(7);
	cout << cab2.getYCoord() << endl;
return 0;
}*/
