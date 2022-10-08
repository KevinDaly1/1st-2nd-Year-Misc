//Name: Kevin Daly
//Login: C00259089
//Date: 20/Jan/2021
//---------------------------------------------------------------------------
// question 8: ask user to input how many numbers they want to input and then
// have them input the numbers. The program then calculates and displays the
// largest, smallest, sum and average.
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int processNumbers(int t_numbers);

int main8()
{
	//variables
	int numbers = 0;
	int average = 0;


	//user input

	std::cout << "how many numbers do you wish to enter?" << std::endl;
	std::cin >> numbers;

	if (numbers <= 0)
	{
		std::cout << "Error: you cannot enter 0 or less numbers" << std::endl;
	}

	else
	{
		average = processNumbers(numbers);

		std::cout << "The average is: " << average << std::endl;
	}

	system("pause");
	return 0;
}

int processNumbers(int t_numbers)
{
	//variables

	int currentNumber = 0; // number entered by user
	int numbersEntered = 0; // how many numbers have been processed so far
	int largest = 0;
	int smallest = 0;
	int sum = 0;
	int average = 0;


while (numbersEntered < t_numbers)
{
	//user input 

	std::cout << "Enter a number from 1 to 10: ";
	std::cin >> currentNumber;

	if (currentNumber < 1 || currentNumber > 10)
	{
		std::cout << "Error: Number not within range, enter again" << std::endl;
	}
	else
	{
		if (largest == 0) // if no number is currently the largest
		{
			largest = currentNumber; // initialise the current number as the largest
		}
		if (smallest == 0) // if no number is currently the smallest
		{
			smallest = currentNumber; // initialise the current number as the smallest
		}

		if (currentNumber > largest) // if the current number is bigger than the largest
		{
			largest = currentNumber;
		}
		if (currentNumber < smallest) // if the current number is smaller than the smallest
		{
			smallest = currentNumber;
		}

		sum += currentNumber; // add the current number to the sum
		numbersEntered++;
	}

}

	average = sum / t_numbers;

	//display answers

	std::cout << "the largest number is: " << largest << std::endl;
	std::cout << "the smallest number is: " << smallest << std::endl;
	std::cout << "the sum is: " << sum << std::endl;

	return average;
}
