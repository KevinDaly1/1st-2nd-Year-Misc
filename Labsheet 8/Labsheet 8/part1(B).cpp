//Name: Kevin Daly
//Login: C00259089
//Date: 03/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 1 (B)
// User inputs their centimeter value in main and the program calls the function
// inchEquivelant which converts the centimeters to inches and returns inches to
// main where they are then displayed
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 9m
// Known Bugs:
// No error checking done on user input


#include <iostream>

float inchEquivalent(int t_cms);

int main2()
{
	int cms = 0; //centimeters entered
	float inches = 0;

	std::cout << "Please enter cm's" << std::endl;
	std::cin >> cms;

	inches =inchEquivalent(cms); //call function inchEquivalent
	
	std::cout << cms << " centimeters is: " << inches << " inches" << std::endl;

	system("pause");
	return 0;
}

float inchEquivalent(int t_cms)
{
	float conversion = 0.394;
	float inches = t_cms * conversion; // calculate inches

	return inches;
	
}