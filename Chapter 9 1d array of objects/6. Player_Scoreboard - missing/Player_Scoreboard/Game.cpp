// Name: Bernadette Power
// Login: powerb
// Date: 
// Approx hours of work : 
//---------------------------------------------------------------------------
// Program to how to insert and delete from the start and end of an array of Player objects.
// ---------------------------------------------------------------------------
// Known Bugs:
// None

//////////////////////////////////////////////////////////// 
// Headers for SFML projects
// include correct library file for release and debug versions
// include iostream for console window output
// include support for randomizing and time
// include Player header file
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
//  default constructor function
{
}

void Game::loadContent()
// load the font file & set message string
{
	if (!m_font.loadFromFile("ASSETS/FONTS/BebasNeue.otf"))
	{
		std::cout << "error with font file file";
	}

	// set up the message string 
	m_message.setFont(m_font);  // set the font for the text
	m_message.setCharacterSize(24); // set the text size
	m_message.setString("Scoreboard");
	m_message.setFillColor(sf::Color::White); // set the text colour
	m_message.setPosition(10, 10);  // its position on the screen
}


void Game::run()
//This function is the most important function in the project. 
// This function contains the main game loop which controls the game. 
{

	std::string theMessage = "Program to insert & delete objects in an array";

	srand(time(nullptr)); // set the seed once

	initializeGame();  // put players in the array



	m_message.setString(theMessage);

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
	// update any variables...
}


void Game::draw()
{
	window.clear(); // clear the screen 

	window.draw(m_message);  // write the message on the screen
							 // Draw the game sprites
	window.display();
}


void Game::initializeGame()
{
	scoreboard[0] =  Player("Harry", 200, 3);
	scoreboard[1] =  Player("Ann", 180, 2);
	scoreboard[2] =  Player("David", 150, 3);
	scoreboard[3] =  Player("Susan", 130, 1);

	noOfPlayers = 4;
}

void Game::insertPlayerAtEnd(Player newPlayer)
// Insert the new player object at the end of the array
{
	
	
}

void Game::deleteLastPlayer()
// Deletes the last player at the end of the array
{
	

}


std::string Game::insertPlayerAtStart(Player newPlayer)
// Insert the new player object at the start of the array
{
	std::string info = "";

	return info;

}


void Game::moveAllPlayersForward()
// Move all the player objects forward one cell.
{
	

}


void Game::deletePlayerAtStart()
{

}


std::string Game::deleteFirstPlayer()
// delete the player object at the start of the array
{
	std::string info = "";

	return info;
}


void Game::moveAllPlayersBack()
// Move all the player objects back one cell.
{


}


void Game::insertPlayerScore(Player newPlayer)
// Exam question from paper 2010
{
	


}