//Name: Kevin Daly
//Login: C00259089
//Date: 20/Jan/2021
//---------------------------------------------------------------------------
// question 7: menu for user to choose from 3 different conversion functions
// or to exit the program
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

void farToCel(); // conversion from fahrenheit to celcius 
void celToFar(); // conversion from celcius to fahrenheit
void inchToCm(); // conversion from inches to cm

int main7()
{
	//variables
	int option = 0;

	do
	{
		std::cout << "1. Fahrenheit to Celcius" << std::endl;
		std::cout << "2. Celcius to Fahrenheit" << std::endl;
		std::cout << "3. Inches to Centimeters" << std::endl;
		std::cout << "4. Exit" << std::endl;
		std::cout << std::endl;
		std::cin >> option;
		std::cout << std::endl;

		switch (option)
		{
			case 1:
			farToCel();
			break;

			case 2:
			celToFar();
			break;

			case 3:
			inchToCm();
			break;

			case 4:
			std::cout << "Shutting down";
			break;

			default:
			std::cout << "error: choose from options 1 - 4";
			break;
		}

	} while ( option != 4);

	std::cout << std::endl;
	system("pause");
	return 0;
}

void farToCel()
{
	//variables
	
	int fahrenheit = 0;
	int cel = 0;

	std::cout << "Please input temperature in fahrenheit: ";
	std::cin >> fahrenheit;

	//conversion
	cel = (fahrenheit - 32) * 0.5556;

	//display answer
	std::cout << fahrenheit << " fahrenheit in celcius is: " << cel << " celcius" << std::endl;
	std::cout << std::endl;
}

void celToFar()
{
	//variables

	int cel = 0;
	int fahrenheit = 0;

	std::cout << "Please input temperature in fahrenheit: ";
	std::cin >> cel;

	//conversion
	fahrenheit = (cel * 1.8) + 32;

	//display answer
	std::cout << cel << " celcius in fahrenheit is: " << fahrenheit << " fahrenheit" << std::endl;
	std::cout << std::endl;
}

void inchToCm()
{
	//variables

	float inches = 0;
	float cm = 0;

	std::cout << "Please enter measurement in inches: ";
	std::cin >> inches;

	//conversion
	cm = inches / 2.54;

	//display answer
	std::cout << inches << " inches in cm is: " << cm << " fahrenheit" << std::endl;
	std::cout << std::endl;
}
