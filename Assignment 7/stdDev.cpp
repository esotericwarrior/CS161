#include "Person.hpp"
#include <iostream>
#include <string>
#include <cmath>
using std::endl;
using std::cout;
using std::cin;
using std::string;

double stdDev(Person array[], int arraySize)
{
	double totalSum = 0;
	double average = 0;
	double meanSquareDif = 0;
	//double stdDev = 0;
}

for(int count = 0; count < arraySize; count++)
{
	// Calculate the sum
	totalSum += array[count].getAge();
}
	// Calculate the average
	average = (totalSum / arraySize);

for(int count = 0; count < arraySize; count++)
{
	meanSquareDif += pow((average - array[count].getAge()), 2);
	//meanSquareDif = pow(array[count] - average).getAget();
}

double age_stdDev = 0;
	age_stdDev = sqrt(meanSquareDif / (arraySize - 1));

	return age_stdDev;
}


int main()
{

return 0;
}
