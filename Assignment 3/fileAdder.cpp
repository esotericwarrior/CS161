/******************************************
** Author: Tristan Santiago
** Date: 10/12/17
** Description: This program reads and sums
** the numberic values stores in a file.
******************************************/
#include <string>
#include <iostream>
#include <fstream>		// Needed to use files
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
	ifstream inputFile;	// File stream object
	string fileName;	// Holds the user entered file name
	int numValues = 0;	// Counts the number of values read
	double value,		// A single value read
		total = 0.0;	// Accumulator	

	// Prompt the user to enter the data file name
	cout << "Please enter your filename." << endl;
	cin >> fileName;

	// Open the input file
	inputFile.open(fileName);

	if (inputFile)			// If the file successfully opened
	{				// process it
	// Display message confirming sum has been written
	cout << "result written to sum.txt" << endl;
	}
	else				// The file could not be found
	{				// and opened
		// Display the error message
		cout << "could not access file\n"; 
	}

	while (inputFile >> value)	// If a value was read, execute the
	{ numValues++;			// loop again to count the value and
	  total += value;		// add it to the total
	ofstream outputFile;		// Write results to new file
	outputFile.open("sum.txt");	// Open new file "sum.txt"
	outputFile << total;		// Copy the sum to "sum.txt"
	outputFile.close();		// Close "sum.txt"	
	}
	
	// Close the file
	inputFile.close();
	return 0;
}
