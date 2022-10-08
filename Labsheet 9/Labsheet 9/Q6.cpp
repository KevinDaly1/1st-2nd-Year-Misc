//Name: Kevin Daly
//Login: C00259089
//Date: 14/Jan/2021
//---------------------------------------------------------------------------
// question 6: ask the user to enter numbers until they enter a 0 and get the
// sum of all the numbers entered
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

int main6()
{
	//variables
	
	int number = 1;
	int sum = 0;

	while (number != 0) // when the user hasn’t entered a 0
	{
		//user input

		std::cout << "Please enter a number: ";
		std::cin >> number;
		sum += number; // add number to sum
	}

	//display answer

	std::cout << "The sum of the numbers is: " << sum << std::endl;
	
	system("pause");
	return 0;
}