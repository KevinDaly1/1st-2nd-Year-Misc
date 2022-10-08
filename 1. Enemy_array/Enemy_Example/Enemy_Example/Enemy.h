// Enemy class declaration
#pragma once
#include "Player.h"
#include "SFML/Graphics.hpp" 
#include <iostream>
#include "Globals.h"   // include global header file

class Player;   // this is a forward reference

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
	void setColour();  // to set and get the enemy rectangle body
	void setColour(sf::Color aCol);
	void chooseColour();
	void changeColour();  // change the colour of the enemy to red
	void setPosition();
	void setPosition(int xPos, int yPos);
	sf::Vector2f getPosition();
	void setBody();

	int getStrength();

	void setDirection(int newDirection);
	int getDirection();
	void setAlive(int newAlive);
	int getAlive();

	void Enemy::matchColour(Player aPlayer);  //enemy is given the same colour as the player
	void Enemy::matchColour_decreaseHealth(Player &aPlayer);  // match colour and decrease players health
};

