// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Program that creates 3 player objects as local variables in the function main().
// The player objects can set and get their values. The player's data members are private.
// ---------------------------------------------------------------------------
// Known Bugs:
// None
////////////////////////////////////////////////////////////

// Needed by main() function
#include <iostream>  // include iostream for console window output
#include "Player.h"   // include Player header file

// Needed by Game.cpp 
#include "Game.h"   // include Game header file


int main()
{

	Player playerOne, playerTwo, playerThree;

	playerOne.setSpeed(6);
	playerOne.setLives(2);
	playerOne.setHealth(5);
	playerOne.setScore(10);

	playerTwo.setSpeed(8);
	playerTwo.setLives(9);

	playerThree.setSpeed(15);
	playerThree.setLives(7);


	playerOne.setHealth(5);


	std::cout << "The speed of playerOne " << playerOne.getSpeed() << std::endl;
	std::cout << "The lives of playerOne " << playerOne.getLives() << std::endl;
	std::cout << "The health of playerOne " << playerOne.getHealth() << std::endl;
	std::cout << "The score of playerOne " << playerOne.getScore() << std::endl;


	std::cout << std::endl;

	std::cout << "The speed of playerTwo " << playerTwo.getSpeed() << std::endl;
	std::cout << "The lives of playerTwo " << playerTwo.getLives() << std::endl;
	std::cout << std::endl;

	std::cout << "The speed of playerThree " << playerThree.getSpeed() << std::endl;
	std::cout << "The lives of playerThree " << playerThree.getLives() << std::endl;
	std::cout << std::endl;

	system("Pause");
	return 0;
}