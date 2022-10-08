//Name: Kevin Daly
//Login: C00259089
//Date: 21/Jan/2021
//---------------------------------------------------------------------------
// question 10: user inputs the amount of numbers and what they are. program
// displays the position of the first and last 9 in the sequence
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main10()
{
	//variables

	int numbers = 0; // how many numbers the user will enter 
	int numbersUsed = 0; // how many numbers have been used 
	int currentNumber = 0; // the number entered by the user 
	bool firstNine = false; // has the first 9 showed up yet? 
	int firstNinePos = 0; // position of the first 9 
	int lastNinePos = 0; // position of the last 9 


	//user input 

	std::cout << "How many numbers do you want to input?" << std::endl;
	std::cin >> numbers;

	while (numbersUsed < numbers) // loops until all numbers are entered
	{
		std::cout << "enter a number: ";
		std::cin >> currentNumber;

		if (!firstNine)
		{
			if (currentNumber == 9)
			{
				firstNinePos = numbersUsed + 1;
				firstNine = true;
			}
		}

		if (currentNumber == 9)
		{
			lastNinePos = numbersUsed + 1;
		}
		numbersUsed++;

	}

		//answer displayed

		std::cout << "The first nine was in the position: " << firstNinePos << std::endl;
		std::cout << "The last nine was in the position: " << lastNinePos << std::endl;

	system("pause");
	return 0;
}