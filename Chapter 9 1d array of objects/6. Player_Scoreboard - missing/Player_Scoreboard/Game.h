// Game class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include <iostream>
#include <cstdlib>  // include support for randomizing
#include <ctime>   // supports ctime function

#include "Globals.h"   // include Global header file
#include "Player.h"   // include Player header file

class Game
{
	static const int MAX_PLAYERS = 6;  // the maximum size of the array
	int noOfPlayers = 0;   // the current number of players in the array
	Player scoreboard[MAX_PLAYERS];  // array storing the 6 highest scores

	sf::RenderWindow window;  // main game window
public:
	sf::Font m_font;  // font for writing text
	sf::Text m_message;  // text to write on the screen

public:	  // declaration of member functions	
	Game(); // default constructor
	void		loadContent();
	void		run();
	void		update();
	void		draw();
	void		initializeGame();

	void		insertPlayerAtEnd(Player newPlayer);

	void		deleteLastPlayer();

	std::string		insertPlayerAtStart(Player newPlayer);
	void		moveAllPlayersForward();

	std::string deleteFirstPlayer();
	void		moveAllPlayersBack();

	void		deletePlayerAtStart();

	void	insertPlayerScore(Player newPlayer);

};
