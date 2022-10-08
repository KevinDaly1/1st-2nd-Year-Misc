// Game class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include <iostream>
#include <cstdlib>  // include support for randomizing
#include <ctime>   // supports ctime function

#include "Globals.h"   // include Global header file
#include "Enemy.h"   // include Enemy header file

class Game
{
	static const int MAX_ENEMIES = 10;
	Enemy enemies[MAX_ENEMIES];  // creates an array of 10 enemy objects

	sf::RenderWindow window;  // main game window

public:
	sf::Font m_font;  // font for writing text
	sf::Text m_message;  // text to write on the screen

public:	  // declaration of member functions	
	Game(); // default constructor
	void	loadContent();
	void	run();
	void  update();
	void  draw();
	void	moveEnemies(); // move the enemy objects within the array
	void checkBounds(); // check if enemy reaches screen boundary
};



