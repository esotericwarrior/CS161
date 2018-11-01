/**********************************************************************
 * Author: Tristan Santiago					      *
 * Date: 10/18/17						      *
 * Description: This function takes three int parameters by reference *
 * and sorts their values into ascending order.			      *
 **********************************************************************/
#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::ostream;

// Function prototypes
/*void getNums (int&, int&, int&);	// Uses reference parameters to
					// input values in the function,
					// but to actually store them in
					// variables defined in main
*/
void smallSort(int&, int&, int&);	// Uses reference parameters to
					// change the values of existing
					// values stored in main
/*
int main()
{
	int a = 14;
	int b = -90; 
	int c = 2;
*/
	/*//Call getNums to input the three numbers
	getNums(small, mid, big);*/
/*
	// Call smallSort to put the numbers in order
	smallSort(a, b, c);

	// Display the new values
	cout << a << ", " << b << ", " << c << endl;
	return 0;
}
*/

/************************************************************
 * 			getNums				    *
 * The arguments passed into input1 and input2 are passed   *
 * by reference so that the values entered into them will   *
 * actually be stored in the memory space of main's small,  *
 * mid, and big variables.				    *
 ************************************************************/
/*void getNums(int &input1, int &input2, int &input3)
{
	cout << "Enter an integer: ";
	cin >> input1;
	cout << "Enter a second integer: ";
	cin >> input2;
	cout << "Enter a third integer: ";
	cin >> input3;
}
*/

/************************************************************
 * 			smallSort			    *
 * The arguments passed into a, b, and c are passed by      *
 * reference so that if they are out of order main's        *
 * variables a, b, and c can be swapped and ordered from    *
 * lowest to highest.           			    *
 ************************************************************/
void smallSort(int &a, int &b, int &c)
{
	int temp;

	// If the numbers are out of order, swap and arrange them
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;	
	}
	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}	 
}

