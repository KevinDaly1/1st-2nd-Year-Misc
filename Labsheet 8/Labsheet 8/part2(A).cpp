//Name: Kevin Daly
//Login: C00259089
//Date: 03/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 2 (A)
// User inputs the time in hours, minutes and seconds in main which are transferred to
// the function secsIn to be converted into seconds and displayed on screen
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 12m
// Known Bugs:
// No error checking done on user input


#include <iostream>

void secsIn(int t_hrs, int t_mins, int t_secs);

int main3()
{
	//variables
	
	int hours = 0;
	int minutes = 0;
	int seconds = 0;


	//User input

	std::cout << "Please enter hours" << std::endl;
	std::cin >> hours;

	std::cout << "Please enter minutes" << std::endl;
	std::cin >> minutes;

	std::cout << "Please enter seconds" << std::endl;
	std::cin >> seconds;

	secsIn(hours, minutes, seconds);

	system("pause");
	return 0;
}

void secsIn(int t_hrs, int t_mins, int t_secs)
{
	int totalSeconds = (t_hrs * 60 * 60) + (t_mins * 60) + t_secs;

	//answer displayed

	std::cout << "total time in seconds is " << totalSeconds << std::endl;
}
