//Name: Kevin Daly
//Login: C00259089
//Date: 08/Nov/2020
//Estimated time: 20 minutes
//Actual time: 40 minutes
//--------------------------------------------------------------------------------------------------------------------
//Program: Take battery capacity and Kilometers to travel from user and Calculate recharges needed and cost of journey
//--------------------------------------------------------------------------------------------------------------------
//Known bugs:No error checking done on user input, does not work

#include <iostream>

int main4()
{
	//Variables

	
    double batteryCapacity = 0;
	float kilometers = 0;
	const int KMS_PER_KWH = 7;
	const double ELECTRICITY_COST = 16.37;
	double totalBattery = 0;
	double rechargeCount = 0;
	double journeyCost = 0;
	int max = 0;


	//User input

	std::cout << "Please enter the capacity of your battery" << std::endl;
	std::cin >> batteryCapacity;

	std::cout << "How many kilometers do you wish to travel?" << std::endl;
	std::cin >> kilometers;


	//Calculations

	//first part of calculating recharge count
	max = batteryCapacity * KMS_PER_KWH;

	//whole number for recharge count
	totalBattery = kilometers / max;
	
	//how many times you will have to recharge
	rechargeCount = (ceil(totalBattery) - 1);

	//cost of journey
	journeyCost = (ELECTRICITY_COST * (batteryCapacity * (rechargeCount + 1))) / 100;

	//Answer displayed

	std::cout << "The amount of recharges your battery needs is " << rechargeCount << std::endl;
	std::cout << "The cost of your journey in euros is " << journeyCost << std::endl;

	system("pause");
	return 0;
}