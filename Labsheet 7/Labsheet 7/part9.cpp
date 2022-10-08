//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 9
// user enters 3 numbers and program outputs the lowest number
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 8m
// Known Bugs:
// None

#include <iostream>

int main9()
{
	//Variables
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int lowestNumber = 0;

	//User input
	std::cout << "please input your 1st number from 1- 15" << std::endl;
	std::cin >> number1;
	std::cout << "please input your 2nd number from 1- 15" << std::endl;
	std::cin >> number2;
	std::cout << "please input your 3rd number from 1- 15" << std::endl;
	std::cin >> number3;

	//calculations
	if ((number1 < 1 || number1 > 15) || (number2 < 1 || number2 > 15) || (number3 < 1 || number3 > 15))
	{
		std::cout << "error: you entered an invalid number ";
	}
	else
	{
	lowestNumber = number1; // sets the 1st number to be lowestNumber 
		
	if (number2 < lowestNumber)
	{
		lowestNumber = number2;
	}
	if (number3 < lowestNumber)
	{
		lowestNumber = number3;
	}

	//Answer displayed
	std::cout << "The lowest number is " << lowestNumber << std::endl;
	}
	system("pause");
	return 0;
}