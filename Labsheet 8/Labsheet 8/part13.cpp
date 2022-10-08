//Name: Kevin Daly
//Login: C00259089
//Date: 17/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 13
// User inputs the speed of two trains and the program calculates the time
// they will meet and how far away from each city they are when they meet
// ---------------------------------------------------------------------------
// Estimated time: 30m
// Time taken: 35m
// Known Bugs:
// No error checking done on input

#include <iostream>

void calTimeAndDist(int t_speedA, int t_speedB);

int main15()
{
	//variables

	int speedA = 0; // The speed of train A 
	int speedB = 0; // the speed of train B


	//User input

	std::cout << "Please enter the speed of train A (kmph): ";
	std::cin >> speedA;
	std::cout << "Please enter the speed of train B (kmph): ";
	std::cin >> speedB;

	calTimeAndDist(speedA, speedB); // calls the function calTimeAndDist to calculate the time the trains meet
	// and the distance from each city they are 

	system("pause");
	return 0;
}

void calTimeAndDist(int t_speedA, int t_speedB)
{
	//variable
	int distance = 260;


	//calculations

	int meetTime = 260 / (t_speedA + t_speedB); // The time (hours) the two trains meet
	int distanceA = t_speedA * meetTime; // distance that train A travels by the time the trains meet
	int distanceB = t_speedB * meetTime; // distance that train B travels by the time the trains meet

	
	//Display answer

	std::cout << "The time the two trains will meet is in " << meetTime << " hours" << std::endl;
	std::cout << "When the trains meet they will be: " << distanceA << " kilometers away from Westford and: "
	<< distanceB << " kilometers away from Eastford"<< std::endl;

}
