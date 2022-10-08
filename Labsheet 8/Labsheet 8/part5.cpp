//Name: Kevin Daly
//Login: C00259089
//Date: 09/Dec/2020
//---------------------------------------------------------------------------
// Labsheet 8 - Problem 5
// User enters their exam marks which are passed to the function getExamGrade where a message
// is returned to main and displayed based on the grade they got
// ---------------------------------------------------------------------------
// Estimated time: 15m
// Time taken: 12m
// Known Bugs:
// No error checking done on input

#include <iostream>

std::string getExamGrade(int t_examMark);

int main7()
{
	//variables
	int examMark = 0;


	//User input

	std::cout << "Please input your exam marks" << std::endl;
	std::cin >> examMark;


	//Answer displayed
	std::cout << getExamGrade(examMark) << std::endl;

	system("pause");
	return 0;
}

std::string getExamGrade(int t_examMark)
{
	//Variable

	std::string message = "";
	
	if (t_examMark < 0 || t_examMark > 100) // Error check
	{
		message = "Error: Invalid number for marks entered";
	}
	else if (t_examMark < 40)
	{
		message = "Fail";
	}
	else if (t_examMark >= 40 && t_examMark < 55)
	{
		message = "Pass";
	}
	else if (t_examMark >= 55 && t_examMark < 70)
	{
		message = "Merit";
	}
	else
	{
		message = "Distinction";
	}

	return message; // return message to main
}
