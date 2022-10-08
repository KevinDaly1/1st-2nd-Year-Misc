//Name: Kevin Daly
//Login: C00259089
//Date: 23/Jan/2021
//---------------------------------------------------------------------------
// question 12: displays first 20 fibonacci numbers
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main()
{
	//variables
	int currentNumber = 0; // current number program is on
	int previousNumber = 0; // previous number to be added to currentNumber
	int nextNumber = 1;


	for (int count = 0; count < 20; count++)
	{
		std::cout << nextNumber << " ";
		currentNumber = nextNumber;
		nextNumber = previousNumber + currentNumber;
		previousNumber = currentNumber;
	}

	system("pause");
	return 0;
}