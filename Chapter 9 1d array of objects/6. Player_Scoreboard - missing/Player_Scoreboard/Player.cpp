// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class

Player::Player()
{
	name = "Name";
	score = 0;
	noOfLives = 0;
}

Player::Player(std::string aName, int aScore, int noLifes)
// create a player with these values
{
	name = aName;
	score = aScore;
	noOfLives = noLifes;
}

void Player::setName(std::string aName)
{
	name = aName;
}


std::string Player::getName()
{
	return name; 
}

int Player::getScore()
{
	return score;
}

int Player::getNoOfLives()
{
	return noOfLives; 

}
