//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 1
// This program takes a number input from the user and depending on
// the number they entered the program displays whether it is less than,
// greater than or equal to 0
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 10m
// Known Bugs:
// None

#include <iostream>

int main1()
{
	//variables
	int number = 0; // The number a user inputs

	//user inputs a number
	std::cout << "Please enter a number" << std::endl;
	std::cin >> number;

	//calculations

	if (number == 0) // If the user enters 0
	{
		std::cout << "The number you have entered is 0 " << std::endl;
	}
	else if (number < 0) // If the user enters a number less than 0
	{
		std::cout << "The number your have entered is less than 0 " << std::endl;
	}
	else // If the user enters a number greater than 0
	{
		std::cout << "The number you have entered is greater than 0 " << std::endl;
	}

	system("pause");
	return 0;
	
 }