//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 5
// The user inputs their age and is then told the price of their cinema ticket
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 12m
// Known Bugs:
// None

#include <iostream>

int main5()
{
	//Variables
	int age = 0;

	//User inputs their age
	std::cout << "Please enter your age" << std::endl;
	std::cin >> age;

	//Display the price of the user's ticket
	if (age <= 0)
	{
		std::cout << "Error: age entered is invalid. ";
	}
	else if (age < 5 || age >= 55)
	{
		std::cout << "Your ticket is free! ";
	}
	else if (age >= 5 && age <= 12)
	{
		std::cout << "your ticket is 3 euro. ";
	}
	else // if (age >= 13 && age <= 54)
	{
		std::cout << "Your ticket is 6 euro. ";
	}
	

	system("pause");
	return 0;
}