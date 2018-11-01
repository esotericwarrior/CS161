/************************************************************
 * Name: Tristan Santiago				    *
 * Date: November 1, 2017				    *
 * Description: This is the header file for the Team class. *
 * It includes the header file from Player.hpp and contains *
 * five data members of type Player. Its constructor takes  *
 * give Players and uses them to initialize each of those   *
 * data members (in the given order). It also contains get  *
 * and set methods for each data member. The totalPoints    *
 * method returns the sum of the points for all players on  *
 * the team.						    *
 ***********************************************************/
#ifndef TEAM_HPP
#define TEAM_HPP
#include <string>
#include "Player.hpp"
using std::string;

// Team class declaration
class Team
{

	private:
	Player pointGuard;
	Player shootingGuard;
	Player smallForward;
	Player powerForward;
	Player center;

	public:
	Team(Player, Player, Player, Player, Player);


		int totalPoints();

		Player getPointGuard();
		Player getShootingGuard();
		Player getSmallForward();
		Player getPowerForward();
		Player getCenter();

		void setPointGuard(Player);
		void setShootingGuard(Player);
		void setSmallForward(Player);
		void setPowerForward(Player);
		void setCenter(Player);
};

#endif
