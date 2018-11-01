// Don't forget the header
#include <fstream>

using namespace std;

int main()
{
	ofstream outputFile;

	outputFile.open("c:\\temp\\CS161OutputFile.txt");

	outputFile << "I am writing to a file ";

	outputFile.close();
return 0;
}

