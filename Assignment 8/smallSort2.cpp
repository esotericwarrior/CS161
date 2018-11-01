/****************************************************************
 * Author: Tristan Santiago					*
 * Date: November 11, 2017					*
 * Description: This program contains a void function		*
 * named smallSort2 that takes as parameters the addresses	*
 * of three int variables and sorts the int at those		*
 * addresses into ascending order.				*	
 ***************************************************************/
#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::ostream;

// Function prototype
void smallSort2(int *, int *, int *);

// This function sorts 3 integers using pointers.
void smallSort2(int *a, int *b, int *c)
{
	// Declaration of the temp variable.
	int temp;

	// If a is greater than b, perform the following:
	if (*a > *b)
	{
		temp = *a;	// Store the value of a in temp.
		*a = *b;	// Swap the values of a and b.
		*b = temp;	// Store the value of b in temp.
	}

	// If a is greater than c, perform the following:
	if (*a > *c)
	{
		temp = *a;	// Store the value of a in temp.
		*a = *c;	// Swap the values of a and c.
		*c = temp;	// Store the value of c in temp.
	}

	// If b is greater than c, perform the following:
	if (*b > *c)
	{
		temp = *b;	// Store the value of b in temp.
		*b = *c;	// Swap the values of b and c.
		*c = temp;	// Store the value of c in temp.
	}
}

// Main for testing the functions.
/*int main()
{
	// Declare and set values for 3 integers.
	int a = 14;		// Set integer a to 14.
	int b = -90;		// Set integer b to -90.
	int c = 2;		// Set integer c to 2.
*/
/*	// Another test that takes input from user.
	int a, b, c;
	cout << "Please enter an integer: " << endl;
	// Assign the user's input to variable a.
	cin >> a;

	cout << "Please enter an integer: " << endl;
	// Assign the user's input to variable b.
	cin >> b;

	cout << "Please enter an integer: " << endl;
	// Assign the user's input to variable c.
	cin >> c;
*/
	// Call the smallSort 2 function, passing the addresses of a, b, and c
	// as parameters.
/*	smallSort2(&a, &b, &c);

	// Display the sorted values.
	cout << a << ", " << b << ", " << c << endl;
	return 0;

}
*/
