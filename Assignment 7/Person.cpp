/****************************************************************
 * Author: Tristan Santiago					*
 * Date: 11/9/17						*
 * Description: This is Person.cpp. It uses the Person class to	*
 * initialize all functions and methods to be used later in	*
 * stdDev.cpp.							*
 ***************************************************************/
#include "Person.hpp"
#include <iostream>
#include <cmath>
using std::endl;
using std::cout;
using std::string;

// Default constructor
//Person::Person()
//{
//	name = " ";
//	age = -1;
//}

// Constructor
Person::Person(string n, double a)
{
	name = n;
	age = a;
}

// Get method for name
string Person::getName()
{
	return name;
}

// Get method for age
double Person::getAge()
{
	return age;
}
