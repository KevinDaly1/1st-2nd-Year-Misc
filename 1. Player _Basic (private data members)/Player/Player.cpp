// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class
void Player::setSpeed(int newSpeed)  // set the speed of the player
{
	if (newSpeed > 0)
	{
		speed = newSpeed;
	}
	
}

int Player::getSpeed()  // get the speed of the player
{
	return speed;
}

void Player::setLives(int newLives)  // set the lives of the player
{
	lives = newLives;
}

int Player::getLives()  // get the lives of the player
{
	return lives;
}


void Player::setHealth(int t_newHealth)
{
	health = t_newHealth;
}


int Player::getHealth()
{
	return health;
}

void Player::setScore(int t_newScore)
{
	score = t_newScore;
}

int Player::getScore()
{
	return score;
}
