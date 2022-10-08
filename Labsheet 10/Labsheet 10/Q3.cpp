//Name: Kevin Daly
//Login: C00259089
//Date: 27/Jan/2021
//---------------------------------------------------------------------------
// question 3: user inputs 10 numbers and they are assigned to an array. The
// largest number, smallest number, sum and average are outputted
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main3()
{
	//variables
	int number = 0; // numbers entered by user
	const int totalNumbers = 10; //amount of numbers to be entered
	int largestNum = 0;
	int smallestNum = 0;
	float sum = 0;
	float average = 0;

	int nums[totalNumbers];

	std::cout << "Please enter 10 numbers in the range of 1 - 10" << std::endl;

	for (int count = 0; count < totalNumbers; count++) // loops until array is filled
	{
		std::cin >> number;
		nums[count] = number; // sets the cell of value count to number

		if (largestNum == 0) // initializes largestNum
		{
			largestNum = nums[count];
		}

		if (nums[count] > largestNum) // if the next value in the array is bigger than largestNum
		{
			largestNum = nums[count];
		}

		if (smallestNum == 0) // initializes smallestNum
		{
			smallestNum = nums[count];
		}

		if (nums[count] < smallestNum) // if the next value in the array is smaller that smallestNum
		{
			smallestNum = nums[count];
		}

		sum += nums[count]; 
	}

	average = sum / totalNumbers;

	for (int count = 0; count < totalNumbers; count++) // loops until array is filled
	{
		std::cout << nums[count] << " ";
	}
	std::cout << std::endl;

	std::cout << "the largest number is: " << largestNum << std::endl;
	std::cout << "the smallest number is: " << smallestNum << std::endl;
	std::cout << "the sum is: " << sum << std::endl;
	std::cout << "the average is: " << average << std::endl;

	system("pause");
	return 0;
}