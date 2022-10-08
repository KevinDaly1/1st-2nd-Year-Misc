//Name: Kevin Daly
//Login: C00259089
//Date: 13/Jan/2021
//---------------------------------------------------------------------------
// question 2: randomly Generate 10 even numbers and display them on screen as
// well as the sum of those numbers
// ---------------------------------------------------------------------------
// Known Bugs:
// none

#include <iostream>
#include <cstdlib>
#include <ctime>

int main2()

{
	//variables

	int count = 0; // how many even numbers have been generated
	int sum = 0; // the sum of the even numbers
	int rdm = 0; // a random number


	srand(time(nullptr)); // clock for rand


	//loop

	while (count < 10) // while 10 even numbers haven't been generated
	{
		rdm = (rand() % 50) + 1; // random number from 1 - 50
		if (rdm % 2 == 0) // if the remainder after dividing the random number by 2 is 0 (even number)
		{
			std::cout << " " << rdm; // display the random number
			sum += rdm; // add the random number to the sum
			count++; // increase the count of even numbers by 1
		}
	}
	std::cout << ". The sum is: " << sum << std::endl;

	system("pause");
	return 0;
}