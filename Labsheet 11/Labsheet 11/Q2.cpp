//Name: Kevin Daly
//Login: C00259089
//Date: 24/Feb/2021
//--------------------------------------------------------------------------
// question 2: user enters a number and the address is sent to the fuction
// makeNegative. if the number isn't negative already or 0 then it is changed
// to a negative number. before and after are displayed on screen
// -------------------------------------------------------------------------
// Known Bugs:
// none

#include <iostream>

void makeNegative(int &t_num); // function to change positive integer to negative

int main2()
{
	//variable

	int num = 0; // number user enters

	
	//user input 
	std::cout << "Please enter the number you wish to make negative: ";
	std::cin >> num;

	std::cout << "Before: " << num << std::endl;
	
	makeNegative(num);

	std::cout << "After: " << num << std::endl;
	system("pause");
	return 0;
}

void makeNegative(int& t_num)
{
	if (t_num > 0) // checks that the number isn't already negative or 0
	{
		t_num *= -1; // changes the number to negative
	}
	
}
