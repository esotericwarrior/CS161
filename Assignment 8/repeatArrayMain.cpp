#include <iostream>
#include <string>

using std::cout;
using std::endl;
/*
using namespace std;

	void repeatArray(double *&firstArray, int size)
	{
		double *newArray = new double[2 * size];
		for(int count = 0; count < size; count++)
		{
			newArray[count] = firstArray[count];
			newArray[count + size] = firstArray[count];
		}

	delete [] firstArray;
	firstArray = newArray;
	}
*/

// First main testing method, with the example provided from the assignment's
// instructions.
int main()
{
	void repeatArray(double *&, int);
        double* myArray = new double[3];
        for (int i=0; i<3; i++)
        myArray[i] = (i+1)*2;

        repeatArray(myArray, 3);

        for (int i=0; i<6; i++)
        cout << myArray[i] << endl;
        delete []myArray;
return 0;
}

// Second main testing method, also provided from an example in the
// assignment's instructions.
/*
int main()
{
	void repeatArray(double *&, int);	
	int size = 3;
	double* myArray = new double[size];

	myArray[0] = 3.1;
	myArray[1] = 4.2;
	myArray[2] = 5.3;

	repeatArray(myArray, size);
	for(int i = 0; i < 2 * size; i++)
	{
		cout << myArray[i] << " ";
	}

	cout << endl;
	delete [] myArray;
	myArray = NULL;
	return 0;
}
*/
