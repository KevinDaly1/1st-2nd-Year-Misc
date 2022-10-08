// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Program to move and draw an array of enemy objects. They are represented by rectangles of different colours
// All enemies move to the right if they are alive
// The array of enemies is a data member of the Game class.
// It displays a message on the screen.
// ---------------------------------------------------------------------------
// Known Bugs:
// None

//////////////////////////////////////////////////////////// 
// Headers for SFML projects
// include correct library file for release and debug versions
// include iostream for console window output
// include support for randomizing and time
// include Enemy header file
// include Game and Globals header file
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
	aGame.loadContent();
	aGame.run();

	return 0;
}

Game::Game():window(sf::VideoMode(static_cast<int>(800), static_cast<int>(600)), "Display and move the enemy objects", sf::Style::Default)
//  default constructor function
{
	
}

void Game::loadContent()
// load the font file & set up message string
{
	if (!m_font.loadFromFile("ASSETS/FONTS/BebasNeue.otf"))
	{
		std::cout << "error with font file file";
	}

	// set up the message string 
	m_message.setFont(m_font);  // set the font for the text
	m_message.setString("Array of enemies");
	m_message.setCharacterSize(24); // set the text size
	m_message.setFillColor(sf::Color::White); // set the text colour
	m_message.setPosition(10, 10);  // its position on the screen
}


void Game::run() 
// The function contains the main game loop which controls the game. 
{

	srand(time(nullptr)); // set the seed once

	sf::Time timePerFrame = sf::seconds(1.0f / 60.0f);

	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	// the clock object keeps the time.
	sf::Clock clock;


	clock.restart();

	while (window.isOpen())  // main game loop
	{
		// check if the close window button is clicked on
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		//get the time since last update and restart the clock
		timeSinceLastUpdate += clock.restart();

		//update every 60th of a second
		//only when the time since last update is greater than 1/60 update the world.

		if (timeSinceLastUpdate > timePerFrame)
		{
			update();
			draw();

			// reset the timeSinceLastUpdate to 0 
			timeSinceLastUpdate = sf::Time::Zero;
		}
	}  // end while loop

} // end main


void Game::update()
// Update the game world - check for keyboard inputs and move game sprites
{
	moveEnemies();  // call function to move the enemy objects
	checkBounds();

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::B))
	{

		
	}

}


void Game::draw()
// Draw the game world - sprites
{
	window.clear();
	window.draw(m_message);  // write the message on the screen

	for (int index = 0; index < MAX_ENEMIES; index++) // draw the enemy objects
	{
		if (enemies[index].getAlive())
		{
			window.draw(enemies[index].getBody());
		}
	}

	window.display();
}


void Game::moveEnemies()
// Move the enemy objects to the right if they are alive
{
	for (int index = 0; index < MAX_ENEMIES; index++)
	{
		if (enemies[index].getAlive())
		{
			enemies[index].move();  // move the enemy objects to the right
		}
	}

}

void Game::checkBounds()
{
	for (int index = 0; index < MAX_ENEMIES; index++)
	{

	}
}
