#include <fstream>

using namespace std;

int main ()
{
	ofstream outputFile;

	outputFile.open("c:\\temp\\infile.txt");

	outputFile << "cobra ";

	outputFile.close ();
}
