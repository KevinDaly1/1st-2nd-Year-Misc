//Name: Kevin Daly
//Login: C00259089
//Date: 09/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 4
// User inputs an amount of euros and this is passed from main to the function
// calculateEuroNotes where it calculates the amount of 10 euro notes and 1
// euro notes are in that amount and displays them
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 17m
// Known Bugs:
// No error checking done on input

#include <iostream>

void calculateEuroNotes(int t_euro);

int main6()
{
	//variables

	int euro = 0;


	//user input
	std::cout << "Please enter an amount of euros" << std::endl;
	std::cin >> euro;

	calculateEuroNotes(euro); //calls the function caluclateEuroNotes passing euro as an argument

	system("pause");
	return 0;
}

void calculateEuroNotes(int t_euro)
{
	//calculations

	int tenEuro = t_euro / 10; // calculate number of 10 euro notes
	int euro = t_euro % 10;  // calculate 1 euros left after 10 euro notes given


	//display answers

	std::cout << "You have " << tenEuro << " Ten euro coins and " << euro << " one Euro coins ";
}
