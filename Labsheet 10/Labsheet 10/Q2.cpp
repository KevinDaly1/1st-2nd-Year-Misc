//Name: Kevin Daly
//Login: C00259089
//Date: 27/Jan/2021
//---------------------------------------------------------------------------
// question 2: user enters 10 numbers and program outputs the count of odd and
// even numbers after assigning the numbers to an array
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main2()
{
	//variables
	double number = 0; // number user enters
	const int totalNumbers = 10; //amount of doubles to be entered
	int oddCount = 0; 
	int evenCount = 0;


	double oddAndEven[totalNumbers];

	std::cout << "Please enter 10 doubles" << std::endl;

	for (int count = 0; count < totalNumbers; count++) // loops until array is filled
	{
		std::cin >> number;
		oddAndEven[count] = number; // sets the cell of value count to number
	}

	for (int count = 0; count < totalNumbers; count++)
	{
		int arrayNum = oddAndEven[count];

		if (arrayNum % 2 == 1)
		{
			oddCount++;
		}

		else
		{
			evenCount++;
		}
	}

	std::cout << "there are " << oddCount << " even numbers and " << oddCount << " odd numbers" << std::endl;

	system("pause");
	return 0;
}