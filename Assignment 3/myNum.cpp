// This program writes numbers to a file
#include <iostream>
#include <fstream>		// Needed to use files
using namespace std;

int main()
{
	ofstream outputFile;

	// Open the output file
	outputFile.open("myNum.txt");
	
	cout << "Now writing data to the file.\n";

	// Write some numbers to the file
	outputFile << "12\n";
	outputFile << "12\n";
	outputFile << "32\n";

	// Close the file
	outputFile.close();

	cout << "Done.\n";
	return 0;
}
