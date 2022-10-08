//Name: Kevin Daly
//Login: C00259089
//Date: 16/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 11
// The user enters the height of the wall the worm has to clim and this is then
// passed to the function calNoDays where it calculates the number of days it
// will take for the worm to climb the wall and sends the answer back to main
// to be displayed
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

int calNoDays(int t_height);

int main13()
{
	//variables

	int height = 0;

	//User input
	
	std::cout << "Please input the height of the wall: ";
	std::cin >> height;


	//Display answer

	std::cout << "To climb to the top of the wall it would take the worm " << calNoDays(height) << " days" << std::endl;

	system("pause");
	return 0;
}

int calNoDays(int t_height)
{
	int climbed = 0; // how far the worm is up the wall
	int days = 0; // how many days have passed

	while (climbed < t_height) // while the worm hasn't climbed high enough
	{
		climbed += 3; // add 3 to climbed

		if (climbed < t_height) // If the worm hasn't reached the top by night
		{
			climbed -= 2; // take 2 away from climbed
		}
		days += 1; //adds 1 day to the day tally
	}	

	return days;
}
