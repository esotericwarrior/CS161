/*********************************************************************
 * Author: Tristan Santiago                                          *
 * Date: 10/18/17                                                    *
 * Description: This hailstone function takes the starting integer   *
 * as a parameter and returns how many steps it takes to reach 1.    *
 *********************************************************************/
#include <iostream>
using std::string;
using std::cout;
using std::cin;
using std::endl;

// Function prototype
int hailstone(int x);

/*
int main()
{
	int val;			// the number to be tested
	
	// Get a number from the user
	cout << "Enter a positive integer: " << endl;
	cin >> val;
	//cout << "Number of steps to get back to reach 1: " << hailstone(val)
	//<< endl;

	// Indicate whether the number is even or odd
	//if (hailstone(val))
	//	cout << val << " is even." << endl;
	//else
	//	cout << val << " is odd." << endl;
return 0;
}
*/
/*******************************************************
 * 			hailstone		       *
 * This function first tests if the integer argument   *
 * it receives is even or odd. If even, the integer    *
 * is divided by two and it becomes the next number in *
 * the sequence. If odd, the integer is multiplied by  *
 * 3 then added to 1 before becoming the next integer  *
 * in the sequence. The sequence stops when the integer*
 * becomes 1. It displays how many steps it takes to   *
 * reach 1.	                                       *
 *******************************************************/
int hailstone(int x)
{
	if (x == 1)				// If the number is 1, it takes
	return 0;				// no steps to reach 1.

	if (x % 2 ==0)				// If number is divisible by 2
		return 1 + hailstone(x / 2);	// the number is even
	else					// If number is not divisible by
		return 1 + hailstone(3 * x + 1);// 2 the number is odd
}
