//Name: Kevin Daly
//Login: C00259089
//Date: 10/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 6
// User inputs two numbers and they are passed to the function divisibility to
// check if the first number is divisible by the second number. The answer is 
// then returned to the main function where it is displayed
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 10m
// Known Bugs:
// No error checking done on input

#include <iostream>

std::string divisibility(int t_num1, int t_num2);

int main8()
{
	//variables

	int num1 = 0;
	int num2 = 0;


	//User input

	std::cout << "Please enter your first number" << std::endl;
	std::cin >> num1;

	std::cout << "Please enter your second number" << std::endl;
	std::cin >> num2;


	//answer displayed

	std::cout << "" << divisibility(num1, num2) << std::endl;

	system("pause");
	return 0;
}

std::string divisibility(int t_num1, int t_num2)
{
	//variable
	std::string message = "";

	if ((t_num1 % t_num2) == 0)
	{
		message = "The first number is exactly divisible by the second number";
	}
	else
	{
		message = "The first number is not exactly divisible by the second number";
	}
	return message;
}
