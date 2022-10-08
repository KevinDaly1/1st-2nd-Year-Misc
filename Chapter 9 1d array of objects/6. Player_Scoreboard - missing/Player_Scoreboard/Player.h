// Player Class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include <iostream>
#include "Globals.h"   // include Global header file

class Player
{
	 std::string name;
	 int score;
	 int noOfLives;  // each player has 3 lives starting

public:
	Player();
	Player(std::string aName, int aScore, int noLifes);
	void setName(std::string aName);
	std::string getName();
	int getScore();
	int getNoOfLives();
};

