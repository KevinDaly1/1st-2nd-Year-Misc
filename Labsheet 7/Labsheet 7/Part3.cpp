//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 3
// The user enters the marks they got and the program tells the user
// what result they got based on the marks
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 10m
// Known Bugs:
// None

#include <iostream>

int main3()
{
	//variables
	int marks = 0; //marks that the user inputs

	//user inputs marks
	std::cout << "Please enter your overall exam marks" << std::endl;
	std::cin >> marks;

	//calculations

	if (marks < 0 || marks > 100) // if the user enters a value less than 0 or greater than 100
	{
		std::cout << "Error: marks entered must be from 0 to 100 " << std::endl;
	}
	else if (marks < 40) // if the user enters a value less than 40
	{
		std::cout << "You have failed " << std::endl;
	}
	else if (marks >= 40 && marks < 55) // if marks are greater than or equal to 40 and less than 55
	{
		std::cout << "You passed " << std::endl;
	}
	else if (marks >= 55 && marks < 61) // if marks are greater than or equal to 55 and less than 61
	{
		std::cout << "You got a merit 1 " << std::endl;
	}
	else if (marks >= 61 && marks < 70) // if marks are greater than or equal to 61 and less than 70
	{
		std::cout << "You got a merit 2 " << std::endl;
	}
	else // if marks are greater than or equal to 70 and less than or equal to 100
	{
		std::cout << "You got a distinction " << std::endl;
	}
	system("pause");
	return 0;
}