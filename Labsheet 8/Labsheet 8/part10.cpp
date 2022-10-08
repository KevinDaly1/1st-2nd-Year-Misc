//Name: Kevin Daly
//Login: C00259089
//Date: 16/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 10
// The user enters the amount of passengers and distance they wish to travel
// which are then passed to the function calCost to calculate the cost and
// return it to main to be displayed
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 15m
// Known Bugs:
// No error checking done on input

#include <iostream>

int calCost(int t_passengers, int t_length); // function to calculate cost of journey using the passengers and length of journey

int main12()
{
	//variables

	int passengers = 0; 
	int length = 0; // length of journey in kms
	int cost = 0; //cost of journey


	//User input

	std::cout << "Please enter the number of passengers: ";
	std::cin >> passengers;
	std::cout << "Please enter the distance you wish to travel: ";
	std::cin >> length;

	cost = calCost(passengers, length); // calls the function calCost with the arguments passangers and length


	//display answer

	std::cout << "The total cost of " << passengers << " People travelling " << length << " kilometers is: €" << cost << std::endl;

	system("pause");
	return 0;
}

int calCost(int t_passengers, int t_length)
{
	//variables
	
	int cost = 0;

	if (t_length <= 3) // if the journey is less than or equal to 3 kilometers
	cost = 4 * t_passengers;

	else // if the journey is greater that 3 kilometers
	cost = (4 * t_passengers) + ((t_passengers * 1) * (t_length - 3));

	return cost;
}
