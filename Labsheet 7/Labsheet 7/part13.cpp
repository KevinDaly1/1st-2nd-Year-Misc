//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 13
// User inputs the value of last year's premium and the number of claims they made in the year
// and the program calculates the insurance premium for the coming year
// ---------------------------------------------------------------------------
// Estimated time: 13
// Time taken: 11
// Known Bugs:
// None

#include <iostream>

int main()
{
	//Variables

	int claims = 0;
	int oldPremium = 0;
	int newPremium = 0;


	//User input

	std::cout << "Please enter last year's premium" << std::endl;
	std::cin >> oldPremium;

	std::cout << "Please enter the number of claims you made in the year" << std::endl;
	std::cin >> claims;

	if ((oldPremium < 0 || oldPremium > 100) || (claims < 0)) //if the user inputs a premium value less than 0% or greater than 100% 
	// OR if the user inputs a value less than 0 for claims
	{
		std::cout << "Error: incorrect input" << std::endl;
	}
	else
	{
		//calculations
		if (claims == 0) // if no claims were made last year
		{
			newPremium = (oldPremium + 3); // 40% of 5% is 3% which is added to last years premium
		}
		else
		{
			newPremium = (oldPremium + 5) + (claims * 20); // add 5% to last year’s premium and then add another 20%
			// for each claim they made through the year
		}

		//Display answer
		std::cout << "your Premium value for the coming year is " << newPremium << std::endl;

	}
	system("pause");
	return 0;

}