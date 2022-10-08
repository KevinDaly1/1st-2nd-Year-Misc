//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 10
// Modify problem 9 to display the numbers in ascending order
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 12m
// Known Bugs:
// None

#include <iostream>

int main10()
{
	//Variables
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int lowestNumber = 0;
	int middleNumber = 0;
	int highestNumber = 0;

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


		middleNumber = number1; // sets the 1st number to be middleNumber 

		if ((number2 < number1 && number2 > number3) || (number2 > number1 && number2 < number3))
		{
			 middleNumber= number2;
		}
		if ((number3 < number1 && number3 > number2) || (number3 > number1 && number3 < number2))
		{
			middleNumber = number3;
		}

		highestNumber = number1; // sets the 1st number to be highestNumber 

		if (number2 > highestNumber)
		{
			highestNumber = number2;
		}
		if (number3 > highestNumber)
		{
			highestNumber = number3;
		}

		//Answer displayed
		std::cout << "The lowest number is " << lowestNumber << std::endl;
		std::cout << "The middle number is " << middleNumber << std::endl;
		std::cout << "The highest number is " << highestNumber << std::endl;
	}
	system("pause");
	return 0;
}