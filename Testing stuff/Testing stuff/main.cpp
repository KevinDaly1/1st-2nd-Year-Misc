//lol
#include <iostream>

int displayNumbers(int t_num);

int main1()
{
	int num = 0;
	float avg = 0;

	srand((int)time(nullptr)); // set the seed once

	std::cout << std::endl << "Enter a number between 1-10:  ";
	std::cin >> num;

	for (; num < 1 || num > 10;)
	{
		std::cout << "please input a valid number between 1 - 10" << std::endl;
		std::cin >> num;
	}

	std::cout << "The average of these numbers is: " << displayNumbers(num);

	system("pause");
	return 0;
}


int displayNumbers(int t_num)
{
	int endNum = rand() % 30;
	int average = 0;

	for (int i = t_num; i < endNum; i++)
	{
		average += i;
		std::cout << i << " " ;
	}
	return average;
}
