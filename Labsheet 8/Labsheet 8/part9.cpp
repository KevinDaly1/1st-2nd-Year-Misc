//Name: Kevin Daly
//Login: C00259089
//Date: 16/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 9
// User inputs time in seconds in main which is passed to the function secsToHMS
// to be converted to hours, minutes and seconds and displayed on screen
// ---------------------------------------------------------------------------
// Estimated time: 14m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

void secsToHMS(int t_seconds); // function to calculate hours, minutes and seconds and display them 

int main11()
{
	//Variables

	int seconds = 0;


	//User input

	std::cout << "Please enter the amount of seconds you wish to convert: ";
	std::cin >> seconds;

	secsToHMS(seconds);

	system("pause");
	return 0;
}

void secsToHMS(int t_seconds)
{
	//variables

	int hours = 0;
	int minutes = 0;
	int seconds = 0;


	//calculations

	hours = (t_seconds / 60) / 60;
	seconds = t_seconds % (60 * 60);
	minutes = seconds / 60;
	seconds %= 60;


	//Answer displayed

	std::cout << "" << t_seconds << " seconds is: " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds" << std::endl;

}
