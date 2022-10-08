//Name: Kevin Daly
//Login: C00259089
//Date: 21/Jan/2021
//---------------------------------------------------------------------------
// question 9: the program asks the user how many numbers they wish to input
// and to input them. the program then displays the highest, lowest and if
// all numbers entered are the same they are displayed all in a row
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main9()
{
	//variables

	int numbers = 0; // amount of numbers the user wishes to input
	int currentNumber = 0; // current number user has entered 
	int numbersEntered = 0; // how many numbers have been entered so far
	int highest = 0;
	int countHighest = 0; //how many times highest number repeats
	int lowest = 0;
	int countLowest = 0; //how many times lowest number repeats
	float total = 0; // all numbers added together


	//user input
	std::cout << "How many numbers do you want to input?" << std::endl;
	std::cin >> numbers;

	while (numbersEntered < numbers)
	{
		std::cout << "enter a number: ";
		std::cin >> currentNumber;
		if (numbersEntered == 0) // Initializing highest and lowest
		{
			highest = currentNumber;
			lowest = currentNumber;
		}
		if (currentNumber > highest)
		{
			highest = currentNumber;
			countHighest = 0;
		}
		if (currentNumber == highest)
		{
			countHighest++;
		}
		if (currentNumber < lowest)
		{
			lowest = currentNumber;
			countLowest = 0;
		}
		if (currentNumber == lowest)
		{
			countLowest++;
		}
		numbersEntered++;
		
	}
	std::cout << std::endl;

	//display answer

	if (countHighest == numbers && countLowest == numbers) // if all numbers entered were the same 
	{
		for (int displayNumRepeated = 0; displayNumRepeated < countHighest; displayNumRepeated++)
		std::cout << currentNumber << " ";
		
	}
	else
	{
		std::cout << "The highest number is: " << highest << std::endl;
		std::cout << "The lowest number is: " << lowest << std::endl;
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}