#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
  string stringFromFile;
  ifstream inputFile("c:\\temp\\CS161OutputFile.txt");

  cout << "These are the contents of the file: " << endl;

  while (inputFile >> stringFromFile)
  {
    cout << stringFromFile << " ";
  }

  inputFile.close();

  return 0;
}
