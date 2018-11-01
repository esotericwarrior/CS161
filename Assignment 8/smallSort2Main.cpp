#include <iostream>
using std::endl;
using std::cout;
using std::cin;
using std::string;
using std::ostream;

// Function prototype
void smallSort2(int *, int *, int *);

// This function sorts 3 integers using points.
/*void smallSort2(int *a, int *b, int *c)
{
// Declaration of the temp variable.
int temp;

// If a is greater than b, perform the following:
if (*a > *b)
{
	temp = *a;
	*a = *b;
	*b = temp;
}

if (*a > *c)
{
	temp = *a;
	*a = *c;
	*c = temp;
}

if (*b > *c)
{
	temp = *b;
	*b = *c;
	*c = temp;
}
}
*/


int main()
{
	// Declare and set values for 3 integers.
//	int a = 14;             // Integer a
//	int b = -90;            // Integer b
//	int c = 2;              // Integer c

//	smallSort2(&a, &b, &c);
	//Display the sorted values.
//	cout << a << ", " << b << ", " << c << endl;

	// Another test that takes input from user.
	int a, b, c;		// Variable declaration

        cout << "Please enter an integer: " << endl;
	// Assign the user's input to variable a.
	cin >> a;

	cout << "Please enter an integer: " << endl;
        // Assign the user's input to variable b.
        cin >> b;
        
        cout << "Please enter an integer: " << endl;
       	// Assign the user's input to variable c.
        cin >> c;

	// Call the smallSort 2 function, passing the addresses of a, b,
	// and  c as parameters.

        smallSort2(&a, &b, &c);
	// Display the sorted values.
	cout << a << ", " << b << ", " << c << endl;
	return 0;
}
