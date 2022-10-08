//Name: Kevin Daly
//Login: C00259089
//Date: 05/Nov/2020
//Estimated time: 10 minuter
//Actual time: 10 minutes
//--------------------------------------------------------------------------------
//Program: Take in battery capacity from user and output kilometers you can travel
//--------------------------------------------------------------------------------
//Known bugs: No error checking done on user input

#include <iostream>

int main1()
{
	//Variables

	int batteryCapacity = 0;
	int kilometers = 0;
	const int KMS_PER_KWH = 7;


	//User input

	std::cout << "Please enter your cars battery capacity" << std::endl;
	std::cin >> batteryCapacity;


	//Calculating Kilometers you can travel
	
	kilometers = batteryCapacity * KMS_PER_KWH; //Kilometers travelled


	//Answer displayed
	std::cout << "On a fully charged battery you can travel " << kilometers << " kilometers" << std::endl;

	system("pause");
	return 0;
}