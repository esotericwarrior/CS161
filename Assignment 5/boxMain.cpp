// This program uses the Box class.
// The Box class declaration file is in Box.hpp
// The Box member function definitions are in Box.cpp
// These files are all compiled into a project called boxMain.cpp
#include <iostream>
#include "Box.cpp"		// Contains Box class declaration
/*using std::cout;
using std::cin;
using std::endl;
using std::string;*/
using namespace std;

int main()
{
	//Box box1;		// Declare a Box object
	Box box1(2.4, 7.1, 5.0);
	Box box2;

	//double boxLength;	
	//double boxWidth;
	//double boxHeight;

	// Get box length, width, and height
	//cout << "This program will calculate the volume and" << endl;
	//cout << "the surface area of a box." << endl;
	//cout << "What is the length of the box? " << endl;
	//cin >> boxLength;
	//cout << "What is the width of the box? " << endl;
	//cin >> boxWidth;
	//cout << "What is the height of the box? " << endl;
	//cin >> boxHeight;

	// Call member functions to set box dimensions.
	// If the function call returns false, it means the
	// argument sent to it was invalid and not stored.
	//if (!box1.setLength(boxLength))		// Store the length
	//	cout << "Invalid box length entered." << endl;
	//else if (!box1.setWidth(boxWidth))	// Store the width
	//	cout << "Invalid box width entered." << endl;
	//if (!box1.setHeight(boxHeight))	// Store the height
	//	cout << "Invalid box height entered." << endl;
	//else					// Value was valid
	//cout << "Volume: " << box1.calcVolume() << endl;
	//cout << "Surface Area: " << box1.calcSurfaceArea << endl;
	//cout << "Volume: " << box2.calcVolum() << endl;
	//cout << "Surface Area: " << box2.calcSurfaceArea << endl;
	{
	// Call member functions to get box information to display
	//cout << "\nHere is the box's data:\n";
	//cout << "Length: " << box1.getLength() << endl;
	//cout << "Width : " << box1.getWidth()  << endl;
	//cout << "Height: " << box1.getHeight() << endl;
	cout << "Volume: " << box1.calcVolume() << endl;
	cout << "Surface Area: " << box1.calcSurfaceArea() << endl;
	cout << "Volume: " << box2.calcVolume() << endl;
	cout << "Surface Area: " << box2.calcSurfaceArea() << endl;
	}
	return 0;
}
