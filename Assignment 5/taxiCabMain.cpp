// This program uses the TaxiCab class
// The Taxicab class declaration file is in Taxicab.hpp
// The Taxicab member function definitions are in Taxicab.cpp
// These files are all compiled into a project called taxiCabMain.cpp
#include <iostream>
#include "Taxicab.hpp"		// Contains Taxicab class declarations
using namespace std;

int main()
{
	Taxicab cab1;
	Taxicab cab2(4, -12);
	cab1.moveX(-1);
	cab1.moveY(7);
	cab1.moveX(-11);
	cout << cab1.getDistanceTraveled() << endl;
	cab2.moveY(4);
	cout << cab2.getYCoord() << endl;
return 0;
}
