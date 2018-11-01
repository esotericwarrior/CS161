/***********************************************************
 * Author: Tristan Santiago                                *
 * Date: 10/17/17                                          *
 * Description: This function takes the falling time as an *
 * argument. It then returns the distance in meters that   *
 * the object has fallen in that time.                     *
 **********************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
using std::setprecision;
using std::fixed;
using std::showpoint;
using std::endl;

// Function prototype
double fallDistance(double time)
{
	double distance;
	distance = (0.5)*9.8*pow(time,2);
	return distance;
}

/*
int main()
{
	// Display message
	cout << "This program determines the distance in meters an\n"
	<< "object falls due to gravity in a specific time period." << endl;
	double time;
	double distance;

	// Set the numeric output formatting
	//cout << fixed << showpoint << setprecision(3);
	cout << "Enter time in seconds: " << endl;
	cin >> time;

	distance = fallDistance(time);
	cout << "The total distance the object has fallen is: " << distance
	<< " meters." << endl;
	return 0;
}
*/
