// Dice class 

#include "Dice.h"   // include Dice header file


// Definition of member functions of the Dice class

	Dice::Dice()  // Default constructor
	{
		int numberGen = (rand() % 6) + 1;
		diceNum = numberGen;
	}

	void Dice::rollDice()
	// Randomly generates a number between 1-6 for the dice.
	{
		int randNum = (rand() % 6) + 1;

		rollResult = std::to_string(randNum);
		
	}

	std::string Dice::getDiceNum()
	{
		return rollResult;
	}



		

