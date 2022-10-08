//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 8
// take the number of a month and output the name of the month
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 7m
// Known Bugs:
// None

#include <iostream>

int main8()
{
	//Variable
	int month = 0; //number that represents that month

	//User input
	std::cout << "Please enter the nummber of the month" << std::endl;
	std::cin >> month;

	//calculations / Answer displayed
	switch (month)
	{
	case 1: //if month = 1
		std::cout << "January. "; //output January
		break;
	case 2:
		std::cout << "February. ";
		break;
	case 3:
		std::cout << "March. ";
		break;
	case 4:
		std::cout << "April. ";
		break;
	case 5:
		std::cout << "May. ";
		break;
	case 6:
		std::cout << "June. ";
		break;
	case 7:
		std::cout << "July. ";
		break;
	case 8:
		std::cout << "August. ";
		break;
	case 9:
		std::cout << "September. ";
		break;
	case 10:
		std::cout << "October. ";
		break;
	case 11:
		std::cout << "November. ";
		break;
	case 12:
		std::cout << "December. ";
		break;
	default:
		std::cout << "Error. Please enter a valid month ";
		break;
	}
	system("pause");
	return 0;
}