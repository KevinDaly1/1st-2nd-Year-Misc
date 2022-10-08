//Name: Kevin Daly
//Login: C00259089
//Date: 10/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 7
// from the main the functions getCardSuit and getCardFace are called to generate
// a random number and return it as a string to main to be displayed on screen
// ---------------------------------------------------------------------------
// Estimated time: 12m
// Time taken: 13m
// Known Bugs:
// No error checking done on input

#include <iostream>
#include <ctime>

std::string getCardSuit(); // Function to get a random card suit

std::string getCardFace(); // Function to get a random card face

int main9()
{
	srand(time(nullptr));

	std::cout << "Your card is the " << getCardFace() << " of " << getCardSuit() << std::endl;
	// Calls the functions and returns the results

	system("pause");
	return 0;
}

std::string getCardSuit()
{
	//varaible

	int randNum = (rand() % 4) + 1; // generates a random number between 1 and 4
	std::string suit = "";

	switch (randNum)
	{
	case 1:
		suit = "Spades";
		break;
	case 2:
		suit = "Clubs";
		break;
	case 3:
		suit = "Hearts";
		break;
	case 4:
		suit = "Diamonds";
		break;
	}


	return std::string(suit);
}

std::string getCardFace()
{
	//varaible

	std::string face = "";

	switch ((rand() % 13) + 1)
	{
	case 1:
		face = "Ace";
		break;
	case 2:
		face = "Two";
		break;
	case 3:
		face = "Three";
		break;
	case 4:
		face = "Four";
		break;
	case 5:
		face = "Five";
		break;
	case 6:
		face = "Six";
		break;
	case 7:
		face = "Seven";
		break;
	case 8:
		face = "Eight";
		break;
	case 9:
		face = "Nine";
		break;
	case 10:
		face = "Ten";
		break;
	case 11:
		face = "Jack";
		break;
	case 12:
		face = "Queen";
		break;
	case 13:
		face = "King";
		break;
	}

	return face;
}
