//Name: Kevin Daly
//Login: C00259089
//Date: 09/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 3
// User inputs the length and Width of a rectangle and the progran passes those
// variables to two functions to get the area and to get the perimeter of the
// rectangle and return them to main to display them
// ---------------------------------------------------------------------------
// Estimated time: 14m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

double calAreaRectangle(double t_length, double t_width); // Function to calculate the area of a rectangle
double calPerimeterRectangle(double t_length, double t_width); // Function to calculate the perimeter of a rectangle

int main5()
{
	//variables

	double length = 0;
	double width = 0;
	

	//user input

	std::cout << "Please enter the length of the rectangle" << std::endl;
	std::cin >> length;

	std::cout << "Please enter the width of the rectangle" << std::endl;
	std::cin >> width;


	//call functions to calculate

	double area = calAreaRectangle(length, width);
	double perimeter = calPerimeterRectangle(length, width);


	//display answer

	std::cout << "The area of the rectangle is " << area << std::endl;
	std::cout << "The perimeter of the rectangle is " << perimeter << std::endl;

	system("pause");
	return 0;
}

double calAreaRectangle(double t_length, double t_width)
{
	double area = t_length * t_width;
	return area;
}

double calPerimeterRectangle(double t_length, double t_width)
{
	double perimeter = 2 * (t_length * t_width);
	return perimeter;
}
