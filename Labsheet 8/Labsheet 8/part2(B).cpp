//Name: Kevin Daly
//Login: C00259089
//Date: 03/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 2 (B)
// User inputs the time in hours, minutes and seconds in main and then calls on
// the function secsIn to convert them into seconds and display it in main
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 12m
// Known Bugs:
// No error checking done on user input


#include <iostream>

int secsIn(int t_hrs, int t_mins, int t_secs);

int main4()
{
	//variables

	int hours = 0;
	int minutes = 0;
	int seconds = 0;
	int totalSeconds = 0; // total time after conversion to seconds

	//User input

	std::cout << "Please enter hours" << std::endl;
	std::cin >> hours;

	std::cout << "Please enter minutes" << std::endl;
	std::cin >> minutes;

	std::cout << "Please enter seconds" << std::endl;
	std::cin >> seconds;


	totalSeconds = secsIn(hours, minutes, seconds); //calls on function secsIn and sets totalSeconds to the return value

	//answer displayed 
	std::cout << "total time in seconds is " << totalSeconds << std::endl;

	system("pause");
	return 0;
}

int secsIn(int t_hrs, int t_mins, int t_secs)
{
	//calculation
	int totalSeconds = (t_hrs * 60 * 60) + (t_mins * 60) + t_secs;
	return totalSeconds;
}
