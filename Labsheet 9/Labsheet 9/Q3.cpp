//Name: Kevin Daly
//Login: C00259089
//Date: 13/Jan/2021
//----------------------------------------------------------------------------------
// question 3: ask the user how many numbers they wish to enter and take in those
// numbers to find the sum, how many of them are odd and the sum of the odd numbers
// ---------------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main3()
{
	//variables

	int noOfNos = 0;
	int noInputted = 0;
	int number = 0;
	int sum = 0;
	int oddCount = 0;
	int oddSum = 0;


	//user input

	std::cout << "How many numbers do you wish to input?" << std::endl;
	std::cin >> noOfNos;


	//loop

	for (noInputted = 0; noInputted != noOfNos; noInputted++)
	{
		std::cout << "Please enter a number: ";
		std::cin >> number;
		sum += number;
		if (number % 2 == 1)
		{
			oddSum += number;
			oddCount++;
		}

	}

	//Answer

	std::cout << "The sum of the numbers entered is: " << sum << std::endl
			  << "The number of odd numbers entered is: " << oddCount << std::endl
			  << "The sum of the odd numbers entered is: " << oddSum << std::endl;

	system("pause");
	return 0;
}