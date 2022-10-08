//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 2
// The user enters their income value and is assignes an income value class
// based on that number
// ---------------------------------------------------------------------------
// Estimated time: 20m
// Time taken: 20m
// Known Bugs:
// None

#include <iostream>

int main2()
{
	//variables
	int incomeValue = 0;

	//User inputs their income value
	std::cout << "Please enter your income value" << std::endl;
	std::cin >> incomeValue;

	//calculations

	if (incomeValue < 0) // If the user enters an income value less than 0
	{
		std::cout << "Error: income value you entered is less than 0 " << std::endl;
	}
	else if (incomeValue >= 0 && incomeValue <= 30000) // If income value is greater than or equal to 0 and less than or equal to 30000 
	{
		std::cout << "You have low income " << std::endl;
	}
	else if (incomeValue > 30000 && incomeValue <= 70000) // If income value is greater than or equal to 30,000 and less than or equal to 70,000
	{
		std::cout << "You have middle income " << std::endl;
	}
	else // if (incomeValue > 70000) // If income value is greater than 70,000 
	{
		std::cout << "You have high income " << std::endl;
	}
	system("pause");
	return 0;
}