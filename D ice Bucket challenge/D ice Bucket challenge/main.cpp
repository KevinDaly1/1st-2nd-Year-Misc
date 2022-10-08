//Author: Kevin Daly
//Date: 26/Oct/2020
//Time taken: no hours, 40 minutes
//Program function: roll a die 10 times and display results
//Known bugs:
//None

#include <iostream> // for cout, endl
#include <ctime> // for time
#include <cstdlib> // for srand , rand

void rollDice(int t_noOfFaces);

int main()
{
	//variables
	int dieFaces = 0;
	int result = 0;

	//User input

	std::cout << "Please enter the number of faces on the die" << std::endl;
	std::cin >> dieFaces;

	int randomNumber = 0;

	std::srand(static_cast<unsigned>(time(nullptr)));

	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	rollDice(dieFaces);
	

	//Calculation

	result = rand() % dieFaces + 1;

	return 1;
}

void rollDice(int t_noOfFaces)
{
	int result = -1;
	result = std::rand() % t_noOfFaces + 1;
	std::cout << "You rolled a " << result << std::endl;
}
