//Name: Kevin Daly
//Login: C00259089
//Date: 14/Jan/2021
//---------------------------------------------------------------------------
// question 4: ask the user how many numbers they want to enter and take those
// numbers in to find the sum, the largest number, smallest number and average
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main4()
{
	//variables
	int noOfNos = 0; //number of numbers user wants to enter
	int noInputted = 0; //number of numbers currently entered
	int number = 0; //current number
	float sum = 0; //sum of all numbers
	int largest = 0; //largest number entered
	int smallest = 777777777; //smallest number entered
	float average = 0; //average of all numbers

	//user input
	std::cout << "How many numbers do you want to enter?" << std::endl;
	std::cin >> noOfNos;


	//loop

	for (noInputted = 0; noInputted != noOfNos; noInputted++)
	{
		std::cout << "Please enter a number: ";
		std::cin >> number;
		sum += number;
		if (number > largest)
		{
			largest = number;
		}
		if (number < smallest)
		{
			smallest = number;
		}
	}

	average = sum / noOfNos;

	//display answer

	std::cout << "The sum of the numbers is: " << sum << std::endl;
	std::cout << "The largest number is: " << largest << std::endl;
	std::cout << "The smallest number is: " << smallest << std::endl;
	std::cout << "The average is: " << average << std::endl;
	system("pause");
	return 0;
}