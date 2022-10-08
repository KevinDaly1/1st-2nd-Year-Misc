//Name: Kevin Daly
//Login: C00259089
//Date: 13/Jan/2021
//---------------------------------------------------------------------------
// question 1: generate 10 random numbers from 1 - 40 and display each
// number and the sum of them
// ---------------------------------------------------------------------------
// Known Bugs:
// none

#include <iostream>
#include <cstdlib>
#include <ctime>

int main1()

{
	//variables

	int sum = 0; // sum of the generated numbers
	int rdm = 0;  // random number generated


	srand(time(nullptr)); // clock for rand


	//loop

	for (int count = 1; count <= 10; count++) 
	{
		rdm = (rand() % 40) + 1; // random number from 1 -40
		std::cout << " " << rdm; // display random number
		sum += rdm; // add the random number to the sum
	}

	//Answer displayed

	std::cout << ". The sum is: " << sum << std::endl;

	system("pause");
	return 0;
}