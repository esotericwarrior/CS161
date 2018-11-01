/************************************************************************
 * Author: Tristan Santiago						*
 * Date: November 16, 2017						*
 * Description: This program contains a void function called		*
 * repeatArray. This function takes two parameters - a reference to a	*
 * pointer of a dynamically allocated array of doubles, and the size of *
 * that array. The pointer is passed by reference so that the value of	*
 * the pointer can be changed when necessary. The repeatArray function	*
 * replaces an original array entered by the user and replaces it with	*
 * one that is twice as large, while also containing the same values	*
 * from the original array. In other words, it repeats the values of	*
 * the original array.							*
 ***********************************************************************/
#include <iostream>
#include <string>
using std::endl;
using std::cout;

// *& Points to the beginning of the array, the address and the value.
void repeatArray(double *&firstArray, int size)
{
	// Double the original array's size and apply it to the new array.
	double *newArray = new double[2 * size];

	// The counter starts at zero. The loop executes until the count is
	// no longer less than the size of the array. Each iteration
	// increments the count by one.
	for(int count = 0; count < size; count++)
	{
		// Copy the elements of the original array and place them
		// into the new array.
		newArray[count] = firstArray[count];
		newArray[count + size] = firstArray[count];
	}
	// Give us freeeeee!
	delete [] firstArray;
	//firstArray = NULL;

	// Redirect the first array's attention to the same location as
	// the new array.
	firstArray = newArray;
}

// First main testing method, with the example provided from the assignment's
// instructions.
/*
int main()
{
	double* myArray = new double[3];
	for (int i=0; i<3; i++)
	myArray[i] = (i+1)*2;

	repeatArray(myArray, 3);

	for (int i=0; i<6; i++)
	cout << myArray[i] << endl;
	delete []myArray;
return 0;
}
*/
// Second main testing method, also provided from an example in the
// assignment's instructions.
/*
	int size = 3;
	double* myArray = new double[size];

	myArray[0]=3.1;
	myArray[1]=4.2;
	myArray[2]=5.3;
  
	repeatArray(myArray,size);
	for(int i=0; i<2*size; i++)
	{
		cout<<myArray[i]<<" ";
	}

	cout<<endl;
	delete [] myArray;
	myArray= NULL;

	return 0;
}*/
