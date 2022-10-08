// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Program that creates 3 player objects as local variables in the function main().
// The player's data members are public.
// ---------------------------------------------------------------------------
// Known Bugs:
// None
////////////////////////////////////////////////////////////


// Needed by main() function
#include <iostream>   // for console window output
#include "Player.h"   // include Player header file

// Needed by Game.cpp 
#include "Game.h"   // include Game header file

int main()
{
	Player playerOne, playerTwo, playerThree;  // three player objects

	playerOne.speed = 5;
	playerOne.lives = 2;

	playerTwo.speed = 7;
	playerTwo.lives = 3;

	playerThree.speed = 4;
	playerThree.lives = 2;


	std::cout << "The speed of playerOne " << playerOne.speed << std::endl;
	std::cout << "The lives of playerOne " << playerOne.lives << std::endl;
	std::cout << std::endl;

	std::cout << "The speed of playerTwo " << playerTwo.speed << std::endl;
	std::cout << "The lives of playerTwo " << playerTwo.lives << std::endl;
	std::cout << std::endl;

	std::cout << "The speed of playerThree " << playerThree.speed << std::endl;
	std::cout << "The lives of playerThree " << playerThree.lives << std::endl;
	std::cout << std::endl;

	system("Pause");
	return 0;
}