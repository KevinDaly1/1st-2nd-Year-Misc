// Enemy class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include <iostream>
#include "Globals.h"   // include global header file

class Enemy
{
	// the data members are private by default
	sf::RectangleShape body;   // the body of the enemy is a rectangle

	int strength; // the strength of the enemy
	int direction;   // the direction that the enemy is facing
	bool alive;    // is the enemy alive

public:	  // declaration of member functions	
	Enemy(); 
	sf::RectangleShape getBody();
	void setColour();  // to set and get the enemys rectangle body
	void setColour(sf::Color aCol);
	void chooseColour();
	void changeColour();  // change the colour of the enemy to red
	void setPosition();
	void setPosition(int xPos, int yPos);
	void setBody();

	void setDirection(int newDirection);
	int getDirection();
	void setAlive(int newAlive);
	int getAlive();

	void move(); // move the enemy in the direction it is facing
	void moveUp(); // move enemy up
	void moveDown(); // move enemy down
	void moveLeft(); // move enemy left
	void moveRight(); // move enemy right
};

