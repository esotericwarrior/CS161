// This program reads the name of an animal from a file named infile.txt
// // which is located in the same directory.  It then writes to a file
// // named outfile.txt “My favorite animal is the <whatever was in the file>.”
//
#include <fstream>
#include <string>

int main() 
{  
	std::ifstream input;
	input.open("./infile.txt");

        std::ofstream output;
        output.open("./outfile.txt");
        
	std::string animal;
        input >> animal;

        output << "My favorite animal is the " << animal << "." << std::endl;

        input.close();
        output.close();

        return 0;
}
