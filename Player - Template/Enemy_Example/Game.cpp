// Name: Kevin Daly
// Login: C00259089
// Date: 04/03/21
// Approx hours of work : 1 hour 30 mins
//---------------------------------------------------------------------------
//	TEMPLATE
//  1.	The player should have the following movement : It should move from left to right across the screen.
//  When it reaches the boundary of the screen on the right hand side it should move from right to left.
//  When it reaches the boundary on the left hand side it should move from left to right and so on.
//	2. When the user presses the ?i? key on the keyboard, the player?s image size should increase. This can be done only once.
//	3. When the user presses the ?c? key on the keyboard, the player?s colour should change.
//	4. When the user presses the ?d? key on the keyboard, the player should move in the opposite direction.

// ---------------------------------------------------------------------------
// Known Bugs:
// When a key is pressed on the keyboard, it picks up multiple clicks at once not just one click.

//////////////////////////////////////////////////////////// 
// include correct library file for release and debug versions
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
	Game myGame;
	myGame.loadContent();
	myGame.run();

	return 0;
}

Game::Game() :window(sf::VideoMode(static_cast<int>(SCREEN_WIDTH), static_cast<int>(SCREEN_HEIGHT)), "Display player object within screen boundary", sf::Style::Default)
//  default constructor function
{
}


void Game::loadContent()
// load the font file & set the message string
{
	if (!m_font.loadFromFile("ASSETS/FONTS/BebasNeue.otf"))
	{
		std::cout << "error with font file file";
	}

	// set up the message string 
	m_message.setFont(m_font);  // set the font for the text
	m_message.setCharacterSize(24); // set the text size
	m_message.setFillColor(sf::Color::White); // set the text colour
	m_message.setPosition(10, 10);  // its position on the screen
}


void Game::run()
//This function is the most important function in the project. 
// This function contains the main game loop which controls the game. 
{
	srand(time(nullptr)); // set the seed once

	sf::Time timePerFrame = sf::seconds(1.0f / 60.0f);
	sf::Time timeSinceLastUpdate = sf::Time::Zero;

	// the clock object keeps the time.
	sf::Clock clock;


	clock.restart();

	while (window.isOpen())
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
// handles input in the game
{
	// checks what  keys have been pressed  

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
	{
		myPlayer.increaseSize();
		// the size of the player's image increases. This occurs only once.
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
	{
		myPlayer.changeColour();
		// changes the colour of the player's image when C is pressed
	}

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		myPlayer.changeDirection();
		// changes the direction the player is moving when D is pressed
	}
	myPlayer.move();
}

void Game::draw()
// draws/renders the game world
{
	window.clear(); // clear the screen 

	m_message.setString("Press the 'i' key on the keyboard to increase the size of the player. This occurs only once. \nPress the 'c' key on the keyboard to change the colour of the player. \nPress the 'd' key on the keyboard to change the direction of the player.");
	window.draw(m_message);  // write the message on the screen

	window.draw(myPlayer.getBody());  // draw the player object

	window.display();
}


