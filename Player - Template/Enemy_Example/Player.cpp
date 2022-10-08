// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class


Player::Player() // default constructor
{
	loadImage(); // load the image file for the sprite

	image_width = 124; // the width of the image in pixels
	scaled = false; // the image is not scaled

	int xPos = SCREEN_WIDTH/2;        // place the player object in the centre of the screen
	int yPos = SCREEN_HEIGHT/2;
	setPosition(xPos, yPos);  // set the position of the players sprite

	speed = 5; // the average speed
	direction = (rand() % 2) + 1;        // Generates a random number between 1 and 2
	lives = 3;
}

void Player::loadImage()
// Loads the image for the player object
{
	if (!texture.loadFromFile("ASSETS/IMAGES/SquareGuy.bmp"))
	{
		std::cout << "error with player image file";
	}

	sprite.setTexture(texture);
}



sf::Sprite Player::getBody() // get the player's body
{
	return sprite;
}


void Player::setPosition()  // set the position of the player on the screen
{
	sprite.setPosition(200, 40);
}


void Player::setPosition(int xPos, int yPos)  // set the position of the player on the screen
{
	sprite.setPosition(xPos, yPos);
}

void Player::move() // moves the player
{
	sf::Vector2f pos(sprite.getPosition());

	if (direction == WEST) // if the player is moving west
	{
		if (pos.x <= 0) // if it hasn't reached the left side of the screen
		{
			direction = EAST;
		}
		pos.x--;
		sprite.setPosition(pos);
	}

	if (direction == EAST) // if the player is moving east
	{
		if (pos.x >= SCREEN_WIDTH - image_width) // if it hasn't reached the right side of the screen
		{
			direction = WEST;
		}
		pos.x++;
		sprite.setPosition(pos);
	}

}

void Player::increaseSize() // increases the size of the player sprite
{
	if (!scaled)
	{
		sf::Vector2f size(image_width, image_width);
		size.x++;
		size.y++;
		image_width = image_width * (size.x / 100);
		sprite.setScale(size.x / 100, size.y / 100);
		scaled = true;
	}
}

void Player::changeColour() // changes the color of the player
{
	sprite.setColor(sf::Color::Red);
}

void Player::changeDirection() // changes the direction the player is moving
{
	if (direction == 1)
	{
		direction = 2;
	}
	else if (direction == 2)
	{
		direction = 1;
	}
}


