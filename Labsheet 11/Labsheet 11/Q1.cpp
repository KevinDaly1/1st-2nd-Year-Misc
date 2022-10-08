//Name: Kevin Daly
//Login: C00259089
//Date: 24/Feb/2021
//--------------------------------------------------------------------------
// question 1: user enters 2 numbers in main and the address of the numbers
// is passes to the function triple_it to multiply the numbers by 3. 
// the numbers are displayed before and after
// -------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

void triple_it(float &t_num1, float &t_num2); // multiplies 2 numbers by 3

int main1()
{
	//variables

	float num1 = 0; // 1st number the user enters
	float num2 = 0; // 2nd number the user enters
	

	//user input

	std::cout << "Please enter your first number: ";
	std::cin >> num1;
	std::cout << "PLease enter your second number: ";
	std::cin >> num2;
	std::cout << std::endl;

	std::cout << "Before multiplication: " << num1 << ", " << num2 << std::endl;
	
	triple_it(num1, num2); // passes the address of the numbers to the function triple_it

	std::cout << "After multiplication: " << num1 << ", " << num2 << std::endl;;

	system("Pause");
	return 0;
}

void triple_it(float &t_num1, float &t_num2)
{
	t_num1 *= 3; // multiplies the number by 3
	t_num2 *= 3; // multiplies the number by 3
}
