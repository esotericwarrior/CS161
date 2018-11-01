/***********************************************************
 * Name: Tristan Santiago				   *
 * Date: 10/26/17					   *
 * Description: Box.h is the Box class specification file. *
 **********************************************************/
#ifndef BOX_HPP			// If not defined
#define BOX_HPP			

// Box class declaration
class Box {
	private:
		double height;
		double width;
		double length;
	public:
		Box();
		Box(double h, double w, double l);
		void setHeight(double h);
		void setWidth(double w);
		void setLength(double l);
		double getHeight();
		double getWidth();
		double getLength();
		double calcVolume();
		double calcSurfaceArea();
};
#endif

/********************************************************************
* 			Box::Box()				    *
* This is the default constructor. It handles instances of blank   *
* arguments by assigning the value 1.				    *
*******************************************************************/
Box::Box() {
	length = 1;
	width = 1;
	height = 1;
}

/********************************************************************
* 			Box::Box(double, double, double)	    *
* This is the constructor. The constructor initializes the length, *
* width, and height member variables.				    *
*******************************************************************/
Box::Box(double l, double w, double h) {
	length = l;
	width = w;
	height = h;
}

/********************************************************************
* 						Box::setLength								*
* Takes the passed parameter and copies it into the member variable	*
* width.															*
*******************************************************************/
void Box::setLength(double l) {
	length = l;
}

/********************************************************************
* 						Box::setWidth								*
* Takes the passed parameter and copies it into the member variable	*
* width.															*
*******************************************************************/
void Box::setWidth(double w) {
	width = w;
}

/********************************************************************
* 						Box::setHeight							    *
* Sets the height according to the passed parameter.				*
* Takes the passed parameter and copies it into the member variable	*
* height.															*
*******************************************************************/
void Box::setHeight(double h) {
	height = h;
}

/********************************************************************
* 			Box::getLength				    *
* This function returns the value in member variable length.	    *
*******************************************************************/
double Box::getLength() {
	return length;
}

/********************************************************************
* 			Box::getWidth				    *
* This function returns the value in member variable width.	    *
*******************************************************************/
double Box::getWidth()
{
	return width;
}

/*******************************************************************
* 			Box::getHeight				   *
* This function returns the value in member variable height.	   *
******************************************************************/
double Box::getHeight()
{
	return height;
}

/********************************************************************
* 			Box::calcVolume				    *
* This function calculates and returns the volume of the box	    *
*******************************************************************/
double Box::calcVolume()
{
	return length * width * height;
}

/*******************************************************************
* 			Box::calcSurfaceArea			   *
* This function calculates and returns the surface area of the    *
* box.								   *
******************************************************************/
double Box::calcSurfaceArea()
{
	return 2 * (length * width) + 2 * (length * height) + 2 * (width * height);
}

