#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;
using std::ostream;

// Function prototypes
/*void getNums (int&, int&, int&);        // Uses reference parameters to
                                        // input valies in the function, 
                                        // but to actually store them in                                                // variables defined in main            
*/
void numSort(int&, int&, int&);       // Uses reference parameters to
                                        // change the values of existing
                                        // values stored in main
int main()                                                                     
{
	int a = 14;
	int b = -90;
	int c = 2;

	/*// Call getNums to input the three numbers
	getNums(small, mid, big);*/

	// Call numSort to put the numbers in order
	numSort(a, b, c);

	// Display the new values
	cout << a << "," << b << ", " << c << endl;
	return 0;
}

void numSort(int &a, int &b, int &c)
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
