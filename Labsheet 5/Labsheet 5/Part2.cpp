//Name: Kevin Daly
//Login: C00259089
//Date: 05/Nov/2020
//Estimated time: 5 minutes
//Actual time: 10 minutes
//------------------------------------------------------------------------------------------------------------------------------
//Program: Take in kilometers to travel and output required battery capacity without recharges
//------------------------------------------------------------------------------------------------------------------------------
//Known bugs:No error checking done on user input

#include <iostream>


int main2()
{
	//Variables

	int kilometers = 0;
	int batteryCapacity = 0;
	const int KMS_PER_KWH = 7;


	//User input

	std::cout << "Please enter the number of kilometers you wish to travel" << std::endl;
	std::cin >> kilometers;


	//Calculation
	
	batteryCapacity = kilometers / KMS_PER_KWH; // battery capacity of the car


	//Answer displayed

	std::cout << "Without recharging, the required battery capacity is " << batteryCapacity << std::endl;

	system("pause");
	return 0;

}