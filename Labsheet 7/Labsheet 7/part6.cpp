//Name: Kevin Daly
//Login: C00259089
//Date: 19/Nov/2020
//---------------------------------------------------------------------------
// Labsheet 7 - Problem 6
// Take the student number, assessment mark and final written exam mark and calculate the final result
// ---------------------------------------------------------------------------
// Estimated time: 10m
// Time taken: 15m
// Known Bugs: entering a letter in student number or having too many digits in student number causes it to skip the other inputs
// inputting anyting but a

#include <iostream>

int main6()
{
	//Variables
	int studentNumber = 0;
	int assessmentMarks = 0;
	int examMarks = 0;
	int result = 0;

	//User input
	std::cout << "Please enter your student numdber: " << std::endl;
	std::cin >> studentNumber;
	

	std::cout << "Please enter your assessment marks: " << std::endl;
	std::cin >> assessmentMarks;
	
	std::cout << "Please enter your final exam marks: " << std::endl;
	std::cin >> examMarks;


	//Calculations
	if (assessmentMarks < 0 || assessmentMarks > 100) // if the assessment mark entered is out of the range of 0 - 100
	{
		std::cout << "Error: assessment marks entered are outside of range" << std::endl;
	}
	else if (examMarks < 0 || examMarks > 100) // if the final written exam marks entered is out of the range of 0 - 100
	{
		std::cout << "Error: exam marks entered are outside of range" << std::endl;
	}
	else
	{
		result = (assessmentMarks * 0.3) + (examMarks * 0.7); // calculate final result


		//Display answer
		std::cout << "Your final result is: " << result << std::endl;
	}



	system("pause");
	return 0;
}