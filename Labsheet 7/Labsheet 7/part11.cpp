//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 11
// User inputs their bill and the program calculates their interest due
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 12m
// Known Bugs:
// None

#include <iostream>

int main11()
{
	//Variables
	int bill = 0; //users credit card bill
	int interest = 0;

	//User inputs their bill
	std::cout << "Please enter your bill " << std::endl;
	std::cin >> bill;

	if (bill <= 0)
	{
		std::cout << "Error: invalid bill inputted" << std::endl;
	}
	else
	{
		if (bill > 500)
		{
			interest = (500 * 0.12) + ((bill - 500.0) * 0.18);
		}
		else // If their bill is 500 or less
		{
			interest = bill * 0.12;
		}
	}
	std::cout << "Your interest due is " << interest << std::endl;
	
	system("pause");
	return 0;
}