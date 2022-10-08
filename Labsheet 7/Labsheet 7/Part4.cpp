//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 4
// The program asks the user to input 2 numbers and then outputs to the screen
//whether the first number is exactly divisible by the second number
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 8
// Known Bugs:
// None

#include <iostream>

int main4()
{
	//variables
	int number1 = 0;
	int number2 = 0;


	//User inputs their 2 numbers
	std::cout << "Please input the first number" << std::endl;
	std::cin >> number1;

	std::cout << "Please input the second number" << std::endl;
	std::cin >> number2;

	//Calculate whether the first number is exactly divisible by the second number

	if ((number1 % number2) == 0)
	{
		std::cout << "The first number is exactly divisible by the second number" << std::endl;
	}
	else
	{
		std::cout << "The first number is not exactly divisible by the second number" << std::endl;
	}
	system("pause");
	return 0;
}