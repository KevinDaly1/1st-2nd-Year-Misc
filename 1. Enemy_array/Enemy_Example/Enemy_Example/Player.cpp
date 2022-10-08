// Player class


#include "Player.h"   // include Player header file


// Definition of member functions of the Player class


Player::Player() // default constructor
{
	int xPos = SCREEN_WIDTH/2;        // place the player object in the centre of the screen
	int yPos = SCREEN_HEIGHT/2;
	setPosition(xPos, yPos);  // set the position of the rectangle

	setColour();  // set the colour of the rectangle
	setBody();  // set the size of the rectangle

	speed = 2;
	score = 0;
	health = 100;
	direction = (rand() % 4) + 1;        // Generates a random number between 1 and 4
	alive = true;
}

void Player::setBody()  // set the size of the players rectangle body
{
	sf::Vector2f sizeVec(80, 80);
	body.setSize(sizeVec);
}

sf::RectangleShape Player::getBody() // get the players rectangle body
{
	return body;
}

void Player::setColour()  // set the colour of the player
{
	body.setFillColor(sf::Color::Magenta);
}



void Player::setPosition()  // set the position of the player on the screen
{
	body.setPosition(200, 40);
}

void Player::setPosition(int xPos, int yPos)  // set the position of the player on the screen
{
	body.setPosition(xPos, yPos);
}


void Player::increaseScore()  // increase the player score
{
	score++;
}

int Player::getScore()  // get the score of the player
{
	return score;
}

void Player::increaseHealth(int value)  // increase the health of the player
{
	health = health + value;
}

void Player::decreaseHealth(int value)  // decrease the health of the player
{
	health = health - value;
}

int Player::getHealth()  // get the health of the player
{
	return health;
}

void Player::moveNorth()  // move the player to the north
{
	sf::Vector2f pos(body.getPosition());
	pos.y = pos.y - speed;

	body.setPosition(pos);
}

void Player::moveSouth()  // move the player to the south
{
	sf::Vector2f pos(body.getPosition());
	pos.y = pos.y + speed;

	body.setPosition(pos);
}


void Player::moveEast()  // move the player to the east
{
	sf::Vector2f pos(body.getPosition());
	pos.x = pos.x + speed;

	body.setPosition(pos);
}

void Player::moveWest()  // move the player to the west
{
	sf::Vector2f pos(body.getPosition());
	pos.x = pos.x - speed;

	body.setPosition(pos);
}

