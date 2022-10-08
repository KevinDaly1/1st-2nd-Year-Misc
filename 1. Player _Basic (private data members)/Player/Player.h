// Player class declaration
#pragma once

class Player
{
	// the data members are private by default
	int speed=5;   // the speed that the player moves
	int lives=3;    // the number of lives
	int health = 10; // the value of health
	int score = 0; // score of the player


public:	  // declaration of member functions				
	void setSpeed(int newSpeed);
	int getSpeed();
	void setLives(int newLives);
	int getLives();	
	void setHealth(int t_newHealth);
	int getHealth();
	void setScore(int t_newScore);
	int getScore();

};

class Asteroid
{
	int speed = 5;
	int health = 1;

	void setHealth(int t_newHealth);
	int getHealth();

	void setSpeed(int t_newSpeed);
	int getSpeed();
};