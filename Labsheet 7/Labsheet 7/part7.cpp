//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 7
// program picks a random suit and number of card and displays this on screen
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 15m
// Known Bugs:
// None

#include <iostream>
#include <ctime>

int main7()
{
	srand(time(nullptr));

	//variables
	int number1 = 0; // The number of the card from 1-13
	int number2 = 0; // The suit from 1-4

	number1 = (rand() % 13) + 1; //inputs a random number between 1-13 for number1
	number2 = (rand() % 4) + 1; //inputs a random number between 1-4 for number2

	switch (number1)
	{
	case 1: // If number1 = 1
		std::cout << "Ace"; // output Ace
		break;
	case 2:
		std::cout << "2";
		break;
	case 3:
		std::cout << "3";
		break;
	case 4:
		std::cout << "4";
		break;
	case 5:
		std::cout << "5";
		break;
	case 6:
		std::cout << "6";
		break;
	case 7:
		std::cout << "7";
		break;
	case 8:
		std::cout << "8";
		break;
	case 9:
		std::cout << "9";
		break;
	case 10:
		std::cout << "10";
		break;
	case 11:
		std::cout << "Jack";
		break;
	case 12:
		std::cout << "Queen";
		break;
	case 13:
		std::cout << "King";
		break;
	default:
		std::cout << "Error";
		break;
	}

	switch (number2)
	{
	case 1:
		std::cout << " of Spades ";
		break;
	case 2:
		std::cout << " of clubs ";
		break;
	case 3:
		std::cout << " of Hearts ";
		break;
	case 4:
		std::cout << " of Diamonds ";
		break;
	default:
		std::cout << "Error";
		break;
	}


	system("pause");
	return 0;
}