//Name: Kevin Daly
//Login: C00259089
//Date: 10/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 8
// User inputs their age which is passed to the function ticketPrice to get
// the price of their ticket and return the price to main to be displayed
// ---------------------------------------------------------------------------
// Estimated time: 13m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

float ticketPrice(int t_age);

int main10()
{
	//variables

	int age = 0;


	//user input

	std::cout << "Please enter your age: ";
	std::cin >> age;


	//display answer

	std::cout << "Your ticket price is: " << ticketPrice(age);

	system("pause");
	return 0;
}

float ticketPrice(int t_age)
{
	float price = 7.0f;

	if (t_age <= 0)
	{
		std::cout << "Error: age entered is invalid" << std::endl;
	}
	else
	{
		if ((t_age > 0 && t_age < 5) || (t_age >= 55))
		{
			price = 0;
		}
		else if (t_age >= 5 && t_age <= 12)
		{
			price = price / 2;
		}
		return price;
	}
	
}
