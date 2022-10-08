//Name: Kevin Daly
//Login: C00259089
//Date: 14/Jan/2021
//---------------------------------------------------------------------------
// question 5: ask the user for a start and end number display the numbers in
// between the two and get the sum of those numbers
// ---------------------------------------------------------------------------
// Known Bugs:
// no error checking done on input

#include <iostream>

void addNumbers(int t_start, int t_end); // function to get the sum of all numbers between start and end number

int main5()
{
	//variables

	int start = 0; // start number
	int end = 0; // end number


	//user input 

	std::cout << "Please enter a start number: ";
	std::cin >> start;
	std::cout << "Please enter a end number: ";
	std::cin >> end;

	addNumbers(start, end);

	system("pause");
	return 0;
}

void addNumbers(int t_start, int t_end)
{
	int sum = t_start;

	while (t_start <= t_end)
	{
		std::cout << t_start << " "; //display current number
		t_start++; // increments t_start by 1
		sum += t_start; // adds t_start to the sum
	}
	
	//display answer

	std::cout << "The total of these numbers is: " << sum << std::endl;
}
