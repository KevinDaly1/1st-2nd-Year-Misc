// Player class declaration
#pragma once
#include "SFML/Graphics.hpp"  // needed to use the SFML library

class Player
{
	// the data members are private by default
	sf::RectangleShape body;   // the body of the player is a rectangle

	int speed;   // the speed that the player moves
	int lives;    // the number of lives

public:	  // declaration of member functions	

	sf::RectangleShape getBody();
	void setColour();  // to set and get the players rectangle body
	void setPosition();
	void setBody();

	void setSpeed(int newSpeed);
	int getSpeed();
	void setLives(int newLives);
	int getLives();

	void moveRight(); // move the player right
	void moveLeft(); // move the player left
	void moveDown(); // move the player down

	void increaseSize(); // increases size of player
	void changeColour(); // changes colour
};
