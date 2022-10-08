// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class

void Player::setBody()  // set the size of the players rectangle body
{
	sf::Vector2f sizeVec(40, 40);
	body.setSize(sizeVec);
}

sf::RectangleShape Player::getBody() // get the players rectangle body
{
	return body;
}

void Player::setColour()  // set the colour of the player
{
	body.setFillColor(sf::Color::Blue);
}


void Player::setPosition()  // set the position of the player on the screen
{
	body.setPosition(200, 40);
}



void Player::setSpeed(int newSpeed)  // set the speed of the player
{
	speed = newSpeed;
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


void Player::moveRight()  // move the player to the right
{
	sf::Vector2f pos(body.getPosition());
	pos.x++;

	body.setPosition(pos);
}

void Player::moveLeft()
{
	sf::Vector2f pos(body.getPosition());
	pos.x--;

	body.setPosition(pos);
}

void Player::moveDown()
{
	sf::Vector2f pos(body.getPosition());
	pos.y++;

	body.setPosition(pos);
}

void Player::increaseSize()
{
	sf::Vector2f size = body.getSize();
	size.x++;
	size.y++;
	body.setSize(size);
}

void Player::changeColour()
{
	body.setFillColor(sf::Color::Red);
}






