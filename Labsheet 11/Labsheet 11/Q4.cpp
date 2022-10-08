//Name: Kevin Daly
//Login: C00259089
//Date: 24/Feb/2021
//--------------------------------------------------------------------------
// question 4: find the average number in the array
// -------------------------------------------------------------------------
// Known Bugs:
// none

#include <iostream>

double calAverage(double t_array[], const int t_size);

int main()
{
	//variables

	const int size = 4;
	double array[size] = { 4,3,6,2 };
	double average = 0; // the average of the array

	average = calAverage(array, size);

	std::cout << "The average of the array is: " << average << std::endl;
	system("pause");
	return 0;
}

double calAverage(double t_array[], const int t_size)
{
	//variable
	double average = 0;
	double sum = 0;
	int count = 0;

	for (count = 0; count < t_size; count++)
	{
		sum += t_array[count];
	}

	average = sum / count;
	return average;
}
