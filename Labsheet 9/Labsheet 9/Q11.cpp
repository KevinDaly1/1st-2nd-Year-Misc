//Name: Kevin Daly
//Login: C00259089
//Date: 23/Jan/2021
//--------------------------------------------------------------------------------
// question 11: user inputs a number and program outputs that number and every
// third number in reverse. It then displays the sum and average of these numbers
// -------------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

void reverseDisplay(int t_number);

int main11()
{
	//variables
	int number = 0; // number the user enters


	//user input

	std::cout << "Please enter a number: ";
	std::cin >> number;
	reverseDisplay(number);



	system("pause");
	return 0;
}

void reverseDisplay(int t_number)
{
	float sum = 0;
	float average = 0;
	int numberCount = 0; // how many numbers have been displayed

	while (t_number >= 0)
	{
		std::cout << t_number << " ";
		sum += t_number;
		numberCount++;
		t_number -= 3;
	}
	average = sum / numberCount;
	std::cout << std::endl;


	//display answer

	std::cout << "sum is: " << sum << std::endl;
	std::cout << "average is: " << average << std::endl;
	
}
