// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Program to move and draw an array of enemy objects. They are represented by rectangles of different colours
// Each enemy has a direction it moves in and whether it is alive or not.
// A player object is also created. It moves via the keyboard.
// It displays the players health on the screen

// Has code for the Enemy following the Player object. 
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
	Game game;
	game.loadContent();
	game.run();

	return 0;
}



Game::Game() :window(sf::VideoMode(static_cast<int>(SCREEN_WIDTH), static_cast<int>(SCREEN_HEIGHT)), "Display enemy objects within screen boundary", sf::Style::Default)
{

}

void Game::loadContent()
// load the font file
{
	if (!m_font.loadFromFile("ASSETS/FONTS/BebasNeue.otf"))
	{
		std::cout << "error with font file file";
	}
}


void Game::run()
//This function is the most important function in the project. 
// It moves and draws an array of enemies
// A player object moves via the keyboard.
// This function contains the main game loop which controls the game. 
{
	bool collide = false;

	// set up the message string 
	m_message.setFont(m_font);  // set the font for the text
	m_message.setCharacterSize(24); // set the text size
	m_message.setFillColor(sf::Color::White); // set the text colour
	m_message.setPosition(10, 10);  // its position on the screen


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
{
	// checks if the four arrow keys have been pressed and 
	// calls the player object to move itself in the appropriate direction
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		myPlayer.moveNorth();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		myPlayer.moveSouth();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		myPlayer.moveWest();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		myPlayer.moveEast();
	}


	if (sf::Keyboard::isKeyPressed(sf::Keyboard::C))  // call the players to match colour
	{
		for (int count = 0; count < MAX_ENEMIES; count++)
		{
			enemies[count].matchColour_decreaseHealth(myPlayer);
		}
	}










}

void Game::draw()
{

	// update any variables...

	window.clear(); // clear the screen 

	m_message.setString("Player health : " + std::to_string(myPlayer.getHealth()));
	window.draw(m_message);  // write the message on the screen


	// Draw the game sprites
	for (int index = 0; index < MAX_ENEMIES; index++) // draw the enemy objects
	{
		window.draw(enemies[index].getBody());
	}

	window.draw(myPlayer.getBody());  // draw the player object

	window.display();


}


double Game::calculateAvgStrength()
{
	double avg = -1;
	double total = 0;
	int count = 0;

	for (int index = 0; index < MAX_ENEMIES; index++)
	{
		if (enemies[index].getAlive())
		{
			if (enemies[index].getDirection() == NORTH || enemies[index].getDirection() == SOUTH)
			{
				total = total + enemies[index].getStrength();
				count++;
			}
		}
	}

	if (count > 0)
	{
		avg = total / count;
	}
	return avg;
}


std::string Game::findLowestStrength()
{
	int lowest = enemies[0].getStrength();
	std::string message = "";
	int indexPos = -1;

	for (int index = 0; index < MAX_ENEMIES; index++)
	{
		if (enemies[index].getAlive()) // if true
		{
			if (lowest > enemies[index].getStrength())
			{
				lowest = enemies[index].getStrength();
				indexPos = index;
			}
		}
	}

	

	return message;

}


