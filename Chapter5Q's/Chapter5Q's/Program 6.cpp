#include <iostream>

int main()
{
	//variable
	int stars = 0;
	int starsCount = 0;
	//user input
	std::cout << "Enter number of stars required: ";
	std::cin >> stars;

	for (starsCount = 1; starsCount <= stars; starsCount++)
	{
		std::cout << "* ";
		if ((starsCount % 3) == 0)
		{
			std::cout << std::endl;
		}
	}
	
}