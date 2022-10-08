// Player class declaration
#pragma once
#include "Enemy.h"   // include Enemy header file
#include "SFML/Graphics.hpp" 
#include <iostream>
#include "Globals.h"   // include Global header file

class Enemy;   // this is a forward reference

class Player
{
	// the data members are private by default
	sf::RectangleShape body;   // the body of the player is a rectangle

	int speed;  // the speed the players is moving
	int score;   // the players score
	int health;    // the health value
	int direction;  // the direction the player is facing in
	bool alive;  // is the player alive?

public:	  // declaration of member functions	

	Player(); // default constructor
	sf::RectangleShape getBody();
	void setBody();
	void setColour();  
	void setPosition();
	void setPosition(int xPos, int yPos);

	void increaseScore();
	int getScore();
	void increaseHealth(int value);
	void decreaseHealth(int value);
	int getHealth();

	void moveNorth(); // move the player north
	void moveSouth();  
	void moveEast(); 
	void moveWest(); 

};
