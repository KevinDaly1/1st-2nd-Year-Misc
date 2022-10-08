// Game class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include <iostream>

#include "Globals.h"   // include Game Globals header file
#include "Player.h"   // include Player header file

class Game
{
	Player players[MAX_PLAYERS];  // creates an array with 10 player objects

	sf::RenderWindow window;  // main game window

public:	  // declaration of member functions
			Game(); // default constructor
	void	run();
	void	initializeArray();
	void	movePlayers();
	void	update();
	void	draw();
};





