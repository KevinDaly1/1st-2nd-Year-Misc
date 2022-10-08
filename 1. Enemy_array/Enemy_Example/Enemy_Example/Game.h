// Game class declaration
#pragma once
#include "Enemy.h"   // include Enemy header file
#include "Player.h"   // include Player header file

#include "SFML/Graphics.hpp" 

#include <iostream>
#include <cstdlib>  // include support for randomizing
#include <ctime>   // supports ctime function

#include "Globals.h"   // include Global header file

class Game
{
	sf::RenderWindow window;  // main window

	static const int MAX_ENEMIES = 10;
	Enemy enemies[MAX_ENEMIES];  // creates an array of 10 enemy objects
	Player myPlayer;  // creates an object of type Player using the default constructor

public:
	sf::Font m_font;  // font for writing text
	sf::Text m_message;  // text to write on the screen

public:	  // declaration of member functions
	Game();
	void	loadContent();
	void	run();

	void	update();
	void	draw();

	double Game::calculateAvgStrength();
	std::string findLowestStrength();
};



