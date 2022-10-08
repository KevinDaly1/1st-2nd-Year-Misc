//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 12
// user inputs 3 numbers and the program outputs whether the first number is exactly divisible by both numbers,
// the first number is exactly divisible by one of the 2 numbers and which one, or if it is not exactly
// divisible by either number
// ---------------------------------------------------------------------------
// Estimated time: 10
// Time taken: 8
// Known Bugs:
// None

#include <iostream>

int main12()
{
	//variables

	int number1 = 0;
	int number2 = 0;
	int number3 = 0;


	//User input

	std::cout << "please enter your 1st number" << std::endl;
	std::cin >> number1;
	std::cout << "please enter your 2nd number" << std::endl;
	std::cin >> number2;
	std::cout << "please enter your 3rd number" << std::endl;
	std::cin >> number3;


	//calculations / answers displayed

	if (((number1 % number2) == 0) && ((number1 % number3) == 0))
	{
		std::cout << "number 1 is exactly divisible by both number 2 and number 3" << std::endl;
	}
	else if (((number1 % number2) == 0))
	{
		std::cout << "number 1 is exactly divisible by number 2" << std::endl;
	}
	else if ((number1 % number3) == 0) 
	{
		std::cout << "number 1 is exactly divisible by number 3" << std::endl;
	}
	else // if neither number 2 or number 3 divide exactly into number1
	{
		std::cout << "number 1 is not exactly divisible by either number 2 or number 3" << std::endl;
	}
	system("pause");
	return 0;
}