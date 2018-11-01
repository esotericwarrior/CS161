/****************************************************************
 * Author: Tristan Santiago					*
 * Date: 11/9/17						*
 * Description: This is the header file for the Person class.	*
 * it declares the Person class and all necessary functions and *
 * variables to be used in later programs for the assignments.  *
 ***************************************************************/
#ifndef PERSON_HPP
#define PERSON_HPP
#include <iostream>
#include <string>
#include <cmath>
using std::string;

// Person class declaration
class Person
	{
		private:
			string name;
			double age;

		public:
			//Person();			// Default constructor
			Person(string, double);		// Constructor

			// getMethods
			string getName();
			double getAge();
};

#endif
