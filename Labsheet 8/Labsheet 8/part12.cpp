//Name: Kevin Daly
//Login: C00259089
//Date: 17/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 12
// User inputs the number of children to get into an elevator and the program
// calculates how many adults can fit in after the children are in
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

int calNoAdults(int t_children);

int main14()
{
	//variables

	int children = 0;
	int adults = 0;


	//User input

	std::cout << "Please enter the number of children: ";
	std::cin >> children;

	adults = calNoAdults(children);


	//display answer

	std::cout << "The number of adults that can still fit into the elevator is: " << adults << std::endl;

	system("pause");
	return 0;
}

int calNoAdults(int t_children)
{
	int adults = (20 - t_children) * 0.75; // 0.75 comes from 15 adults divided by 20 children

	return adults;
}
