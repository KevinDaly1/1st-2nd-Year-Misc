//Name: Kevin Daly
//C00259089
//Date: 18/Nov/2020
//---------------------------------------------
//Program: Calculate the change to be returned
//---------------------------------------------
//Estimated time: 20 mins
//Time: 25 mins
//known bugs: none

#include <iostream>


int main()
{
	//variables

	double balance = 0;       //The total amount of money inserted
	int balanceInCents = 0;
	double cost = 0;          //The cost of the item
	int costInCents = 0;
	int oneEuro = 0;       //Total one euro coins returned
	int fiftyCent = 0;     //Total 50 cent coins returned
	int twentyCent = 0;	   //Total 20 cent coins returned
	int tenCent = 0;       //Total 10 cent coins returned
	int fiveCent = 0;      //Total 5 cent coins returned
	int twoCent = 0;       //Total 2 cent coins returned
	int oneCent = 0;       //Total 1 cent coins returned
	int moneyBack = 0;     //Total cents to be returned
	int remainder = 0;     //The total cents to be returned carried down to the next sum


	//User inputs price of item and money put in
	
	std::cout << "Please enter your current balance in euros" << std::endl;
	std::cin >> balance;
	
	std::cout << "Please enter the cost of the item you wish to buy in euros" << std::endl;
	std::cin >> cost;


	//Calculations

	if ((balance - cost) < 1)
	{
		std::cout << "Error: not enough money was inserted for this item" << std::endl;    //If not enough money inserter error is displayed
	}

	else
	{	
		balanceInCents = balance * 100;
		costInCents = cost * 100;
		moneyBack = costInCents - cost;    //Total cents to be returned

		
		oneEuro = moneyBack / 100;     //Total one euro coins returned
		remainder = moneyBack % 100;   //The total cents to be returned after returning max amount of 1 euro coins

		fiftyCent = remainder / 50;    //Total 50 cent coins returned
		remainder = remainder % 50;    //The total cents to be returned after returning max amount of 50 cent coins

		twentyCent = remainder / 20;   //Total 20 cent coins returned
		remainder = remainder % 20;    //The total cents to be returned after returning max amount of 20 cent coins

		tenCent = remainder / 10;      //Total 10 cent coins returned
		remainder = remainder % 10;    //The total cents to be returned after returning max amount of 10 cent coins

		fiveCent = remainder / 5;      //Total 5 cent coins returned
		remainder = remainder % 5;     //The total cents to be returned after returning max amount of 5 cent coins

		twoCent = remainder / 2;       //Total 2 cent coins returned
		remainder = remainder % 2;     //The total cents to be returned after returning max amount of 2 cent coins

		oneCent = remainder;           //Total 1 cent coins returned
		
	}

	//Display to the user the coins that are returned to them


	std::cout << "The number of 1 euro coins returned is " << oneEuro << std::endl;
	std::cout << "The number of 50 cent coins returned is " << fiftyCent << std::endl;
	std::cout << "The number of 20 cent coins returned is " << twentyCent << std::endl;
	std::cout << "The number of 10 cent coins returned is " << tenCent << std::endl;
	std::cout << "The number of 5 cent coins returned is " << fiveCent << std::endl;
	std::cout << "The number of 2 cent coins returned is " << twoCent << std::endl;
	std::cout << "The number of 1 cent coins returned is " << oneCent << std::endl;

}
