//Name: Kevin Daly
//Login: C00259089
//Date: 03/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 1 (A)
// User inputs the unit of centimeters in main and it is passed to the function inchEquivelant
// where that function converts centimeters to inches and displayes the inches on screen
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 10m
// Known Bugs:
// No error checking done on user input


#include <iostream>

void inchEquivalent(int t_cms);

int main1()
{
	int cms = 0; //centimeters entered

	std::cout << "Please enter cm's" << std::endl;
	std::cin >> cms;

	inchEquivalent(cms); //call function inchEquivalent

	system("pause");
	return 0;
}

void inchEquivalent(int t_cms)
{
	float conversion = 0.394;
	float inches = t_cms * conversion; // calculate inches
	
	std::cout << t_cms << "cm's in inches is: " << inches << " inches" << std::endl; // output inches on screen
}
