#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string stringFromFile;

	// Combine object creation and file opening into one statement
	ifstream inputFile("c:\\Desktop\\CS161OutputFile.txt");

	// Read in first string
	inputFile >> stringFromFile;

	cout << "First string read from file: " << stringFromFile << endl;

	// Read in second string
	inputFile >> stringFromFile;

	cout << "Second string read from file: " << stringFromFile << endl;

	inputFile.close();
return 0;
}
