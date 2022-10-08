//Name: Kevin Daly
//Login: C00259089
//Date: 17/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 14
// user inputs the size of the group and the program calculates and outputs
// how many men and women are in that group
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

void calMenWomen(int t_members); // function to calculate how many women and men are in the group

int main()
{
	//variables 

	int members = 0;


	//User input

	std::cout << "Please enter the total number of members: ";
	std::cin >> members;

	calMenWomen(members); // calls the function to calculate men and women in the group and display them

	system("pause");
	return 0;
}

void calMenWomen(int t_members)
{
	//variables

	int women = 8;
	int men = 0;


	//caluclations

	women += ((t_members - 8) / 2);
	men = t_members - women;


	//display answer

	if (women != men + 8)
	{
		std::cout << "Error" << std::endl;
	}
	else
	std::cout << "There are " << men << " men and " << women << " women in the group" << std::endl;

}
