// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Project which contains a Game and Player class. 
// The Game class contains an array of Players.
// ---------------------------------------------------------------------------
// Known Bugs:
// None
//////////////////////////////////////////////////////////// 
// Headers for SFML projects
// include correct library file for release and debug versions
// include iostream for console window output
// include Globals, Player and Game header files
//////////////////////////////////////////////////////////// 

#ifdef _DEBUG 
#pragma comment(lib,"sfml-graphics-d.lib") 
#pragma comment(lib,"sfml-audio-d.lib") 
#pragma comment(lib,"sfml-system-d.lib") 
#pragma comment(lib,"sfml-window-d.lib") 
#pragma comment(lib,"sfml-network-d.lib") 
#else 
#pragma comment(lib,"sfml-graphics.lib") 
#pragma comment(lib,"sfml-audio.lib") 
#pragma comment(lib,"sfml-system.lib") 
#pragma comment(lib,"sfml-window.lib") 
#pragma comment(lib,"sfml-network.lib") 
#endif 
#pragma comment(lib,"opengl32.lib") 
#pragma comment(lib,"glu32.lib") 


#include "Game.h"   // include Game header file


int main()
{
	Game aGame;
	aGame.run();

	return 0;
}

Game::Game() :window(sf::VideoMode(static_cast<int>(500), static_cast<int>(600)), "Display and move the player objects", sf::Style::Default)
//  default constructor function
{
}

void Game::run()
//This function is the most important function in the project. 
// It create, moves and draws an array of players
// The function contains the main game loop which controls the game. 
{

	initializeArray();  // set up the array of players

	sf::Time timePerFrame = sf::seconds(1.0f / 60.0f);


	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	// the clock object keeps the time.
	sf::Clock clock;


	clock.restart();

	while (window.isOpen())
	{
		// chek if the close window button is clicked on.
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		//get the time since last update and restart the clock
		timeSinceLastUpdate += clock.restart();

		//update every 60th of a second
		//only when the time since last update is greate than 1/60 update the world.

		if (timeSinceLastUpdate > timePerFrame)
		{

			update();

			draw();

			// reset the timeSinceLastUpdate to 0 
			timeSinceLastUpdate = sf::Time::Zero;
		}
	}  // end while loop

}


void Game::update()
{

	// get keyboard input.
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
	}

	movePlayers();


}


void Game::draw()
{
	// Clear the screen and draw the player
	window.clear();

	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		window.draw(players[index].getBody());  // draw players
	}
	

	window.display();

}

void Game::initializeArray()
// Initialize each player object within the array
{
	players[0].setBody();
	players[0].setColour(sf::Color::Red);
	players[0].setPosition(100,30);

	players[1].setBody();
	players[1].setColour(sf::Color::Yellow);
	players[1].setPosition(0, 40);

	players[2].setBody();
	players[2].setColour(sf::Color::Cyan);
	players[2].setPosition(50, 60);

	players[3].setBody();
	players[3].setColour(sf::Color::Green);
	players[3].setPosition(150, 30);

	players[4].setBody();
	players[4].setColour(sf::Color::Magenta);
	players[4].setPosition(200, 40);

	players[5].setBody();
	players[5].setColour(sf::Color::White);
	players[5].setPosition(250, 60);

	players[6].setBody();
	players[6].setColour(sf::Color::Blue);
	players[6].setPosition(300, 60);

	players[7].setBody();
	players[7].setColour(sf::Color::Yellow);
	players[7].setPosition(350, 30);

	players[8].setBody();
	players[8].setColour(sf::Color::Magenta);
	players[8].setPosition(400, 40);

	players[9].setBody();
	players[9].setColour(sf::Color::White);
	players[9].setPosition(450, 60);
}

void Game::movePlayers()
// Move each player object in the array
{
	for (int index = 0; index < MAX_PLAYERS; index++)
	{
		players[index].moveDown();  // move the player object to the left
	}

}

