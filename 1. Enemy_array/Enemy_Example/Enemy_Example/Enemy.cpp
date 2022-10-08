// Enemy class


#include "Enemy.h"   // include Enemy header file


// Definition of member functions of the Enemy class


Enemy::Enemy() // default constructor
{
	int xPos = (rand() % 700) + 1;        // Generates a random number between 1 and 700
	int yPos = (rand() % 400) + 1;
	setPosition(xPos, yPos);  // set the position of the rectangle

	chooseColour();  // set the colour of the rectangle
	setBody();  // set the size of the rectangle

	strength = (rand() % 10) + 1;        // Generates a random number between 1 and 10
	direction = (rand() % 4) + 1;        // Generates a random number between 1 and 4
	alive = true;
}

void Enemy::setBody()  // set the size of the enemy's rectangle body
{
	sf::Vector2f sizeVec(60, 60);
	body.setSize(sizeVec);
}

sf::RectangleShape Enemy::getBody() // get the enemy's rectangle body
{
	return body;
}

void Enemy::setColour()  // set the colour of the enemy
{
	body.setFillColor(sf::Color::Blue);
}

void Enemy::setColour(sf::Color aCol)  // set the colour of the enemy to a particular colour
{
	body.setFillColor(aCol);
}

void Enemy::chooseColour()  
// set the colour of the Enemy to one of five randomly chosen colours
{
	int aCol = (rand() % 5) + 1;        // Generates a random number between 1 and 5
	
	if (aCol == 1)
	{
		body.setFillColor(sf::Color::Yellow);
	}
	else if (aCol == 2)
	{
		body.setFillColor(sf::Color::Red);
	}
	else if (aCol == 3)
	{
		body.setFillColor(sf::Color::Green);
	}
	else if (aCol == 4)
	{
		body.setFillColor(sf::Color::Cyan);
	}
	else if (aCol == 5)
	{
		body.setFillColor(sf::Color::White);
	}
}

void Enemy::changeColour()  // change the colour of the enemy to red
{
	body.setFillColor(sf::Color::Red);
}


void Enemy::setPosition()  // set the position of the enemy on the screen
{
	body.setPosition(200, 40);
}

void Enemy::setPosition(int xPos, int yPos)  // set the position of the enemy to particular values
{
	body.setPosition(xPos, yPos);
}

sf::Vector2f Enemy::getPosition()
// returns the enemy's position
{
	sf::Vector2f pos(body.getPosition());  // get the current position
	return pos;
}


void Enemy::setDirection(int newDirection)  // set the direction of the enemy to a particular value
{
	direction = newDirection;
}

int Enemy::getDirection()  // get the direction of the enemy
{
	return direction;
}

int Enemy::getStrength()  // get the strength of the enemy
{
	return strength;
}

void Enemy::setAlive(int newAlive)  // set the alive of the enemy
{
	alive = newAlive;
}

int Enemy::getAlive()  // get the alive of the enemy
{
	return alive;
}




void Enemy::matchColour(Player aPlayer)
// Change the colour of the enemy's rectangle body to the same colour as the players.
{
	body.setFillColor(aPlayer.getBody().getFillColor());
}


void Enemy::matchColour_decreaseHealth(Player &aPlayer)
// Change the colour of the enemy's rectangle body to the same colour as the players.
// The player's health value is then decreased by 1.
{
	body.setFillColor(aPlayer.getBody().getFillColor());
	aPlayer.decreaseHealth(1);
}