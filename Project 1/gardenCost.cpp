/*******************************************
** Author: Tristan Santiago
** Date: 9/26/17
** Description: This program calculates the
** cost of a garden center's flower display.
*******************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	double  soilCost, seedsCost, fenceCost, total;

	// Get the cost of the soil.
	cout << "What does the soil cost? ";
	cin >> soilCost;

	// Get the cost of the flower seeds.
	cout << "What do the flower seeds cost? ";
	cin >> seedsCost;

	// Get the cost of the fence.
	cout << "What does the fence cost? ";
	cin >> fenceCost;

	// Calculate the total cost.
	total = soilCost + seedsCost + fenceCost;

	// Display the total cost.
	cout << "The total cost is " << total << endl;
	return 0;
}
