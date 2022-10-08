//Name: Kevin Daly
//Date: 08/Nov/2020
//Login: C00259089
//Estimated time: 15 minutes
//Actual time: 11 minutes
//------------------------------------------------------------------------------------------------------------------------------
//Program: Take battery capacity from user and output kilometers and miles you can travel and the cost of fully charging battery
//------------------------------------------------------------------------------------------------------------------------------
//Known bugs:No error checking done on user input

#include <iostream>

int main()
{
	//Variables

	int batteryCapacity = 0;
	int kilometers = 0;
	double miles = 0.0;
	double chargeCost = 0.0;
	const double ELECTRICITY_COST = 16.37;
    const double KMS_PER_KWH = 7;
	const double MILES_PER_KM = 0.621371; //Googles conversion rate


	//User input

	std::cout << "Please enter your battery's capacity" << std::endl;
	std::cin >> batteryCapacity;


	//Calculations

	kilometers = batteryCapacity * KMS_PER_KWH; // Kilometers travelled

	miles = kilometers * MILES_PER_KM; //Miles travelled
	
	chargeCost = (batteryCapacity * ELECTRICITY_COST) / 100; //Charge cost in euros
	

	//Answer displayed

	std::cout << "The number of kilometers you can travel is " << kilometers << std::endl;
	std::cout << "The number of miles you can travel is " << miles << std::endl;
	std::cout << "The cost of fully charging your battery in euros is " << chargeCost << std::endl;

	system("pause");
	return 0;
}