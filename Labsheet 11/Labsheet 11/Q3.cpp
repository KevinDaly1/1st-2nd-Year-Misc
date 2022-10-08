//Name: Kevin Daly
//Login: C00259089
//Date: 24/Feb/2021
//--------------------------------------------------------------------------
// question 3: pass an array and the size of it to the fuction findLowest
// which finds the lowest number in the array and passes it back to main
// -------------------------------------------------------------------------
// Known Bugs:
// none

#include <iostream>

int findLowest(int t_array[], const int t_size);

int main3()
{
	//variables
	
	const int totalNumbers = 6; // total numbers in the array
	int array[totalNumbers] = { 6,10,3,4,1,2 }; // array of numbers
	int lowestNumber = 0; // lowest number in array


	lowestNumber = findLowest(array, totalNumbers);
	std::cout << "The lowest number in the array is: " << lowestNumber << std::endl;

	system("pause");
	return 0;
}

int findLowest(int t_array[], const int t_size)
{
	//variable

	int lowestNumber = 0;

	for (int count = 0; count < t_size; count++) // loops through whole array
	{
		if (lowestNumber == 0) // initializes lowest number to the first number in the array
		{
			lowestNumber = t_array[count];
		}

		if (t_array[count] < lowestNumber)
		{
			lowestNumber = t_array[count];
		}
	}
	return lowestNumber;
}
