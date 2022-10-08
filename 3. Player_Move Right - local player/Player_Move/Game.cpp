// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Player object is created in the main( ) function
// It is drawn and moves to the right.
// ---------------------------------------------------------------------------
// Known Bugs:
// None

//////////////////////////////////////////////////////////// 
// include correct library files for release and debug versions
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

// Needed by main() function
#include "SFML/Graphics.hpp" // Headers for SFML projects
#include <iostream> // for console window output
#include "Player.h"   // include Player header file

// Needed by Game.cpp 
#include "Game.h"   // include Game header file

int main()
{
	//create Window
	sf::RenderWindow window(sf::VideoMode(400, 300), "Display and move the player object");

	Player playerOne;  // create an object of type player

	playerOne.setBody();
	playerOne.setColour();
	playerOne.setPosition();


	Player playerTwo;  // create an object of type player

	playerTwo.setBody();
	playerTwo.setColour();
	playerTwo.setPosition();

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
			// update any variables...
			playerOne.moveDown();  // move the player object to the right

			playerTwo.moveLeft();  // move the 2nd player object to the left

			if (sf::Keyboard::isKeyPressed(sf::Keyboard::I))
			{
				playerOne.increaseSize();
			}
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))
			{
				playerOne.changeColour();
			}


									
			window.clear(); // Clear the screen and draw the player

			window.draw(playerOne.getBody());
			window.draw(playerTwo.getBody());

			window.display();

			// reset the timeSinceLastUpdate to 0 
			timeSinceLastUpdate = sf::Time::Zero;
		}
	}  // end while loop



	system("Pause");
	return 0;

}
