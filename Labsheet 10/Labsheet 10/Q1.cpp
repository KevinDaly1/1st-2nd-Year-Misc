//Name: Kevin Daly
//Login: C00259089
//Date: 27/Jan/2021
//---------------------------------------------------------------------------
// question 1: assign random numbers to each cell in an array and display them
// in reverse order
// ---------------------------------------------------------------------------
// Known Bugs:
// none

#include <iostream>

int main1()
{
	//variables

	const int totalNums = 10;
	int randNum = 0;

	int randIntegers[totalNums];

	for (int count = 0; count < totalNums; count++)
	{
		randIntegers[count] = (rand() % 10) + 5; // sets a cell to a random number
	}

	for (int count = totalNums - 1; count >= 0; count--)
	{
		std::cout << randIntegers[count] << " "; // display the cells in reverse order
	}

	system("pause");
	return 0;
}