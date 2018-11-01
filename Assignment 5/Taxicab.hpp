/****************************************************************
 * Author: Tristan Santiago					*
 * Date: 10/26/17						*
 * Description: Taxicab.hpp is the Taxicab class specification  *
 * file.							*
 ***************************************************************/
#ifndef TAXICAB_HPP
#define TAXICAB_HPP
class Taxicab
{
	private:
		int xCoord;
		int yCoord;
		int distanceTraveled;
	public:
		Taxicab();		// Default Constructor
		Taxicab(int, int);
		int getXCoord();
		int getYCoord();
		int getDistanceTraveled();
		void moveX(int);
		void moveY(int);
};
#endif
