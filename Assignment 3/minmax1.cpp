#include <iostream>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main()
{

int numIntegers;	// Number of integers user wants to enter
int num;		// Current user integer being processed
int max;		// Highest integer user entered
int min;		// Lowest integer user entered

// Ask user how many integers they would like to enter
cout << "How many integers would you like to enter?" << endl;
cin >> numIntegers;

// Ask user to enter integers
cout << "Please enter " << numIntegers << " integers." << endl;
cin >> num;	//testing
max = num;
min = num;

	// Start for loop
	// initialize counter, test, update
	for (int counter = 1; counter <= numIntegers; counter++)
	{	
		/*min = num; // testest
		max = num; // testest*/
		/*cin >> num;*/ // Get user's integer
		/*min = num; // testing
		max = num; // testing*/
		if (num > min)
		min = num;	// recenttest1
		else if (num < max) //recent test
		max = num; //recent test1
	}

cout << "Min: " << min << endl;
cout << "Max: " << max << endl;
return 0;
}
