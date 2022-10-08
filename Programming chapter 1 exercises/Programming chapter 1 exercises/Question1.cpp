//// @Author: Kevin Daly
//// @Program to round a float to the closest integer
//// 
//// Total time on project:
//// 04/10/21 06:40  10 minutes 
//// 07/10/21 06:50  10 minutes
//
//
//#include <iostream>
//#include <cmath>
//
//void roundNum(float t_num);
//
//int main1()
//{
//	float num;
//	std::cout << "Please input a number: ";
//	std::cin >> num;
//	roundNum(num);
//	return 0;
//}
//
//void roundNum(float t_num)
//{
//	int roundedNum;
//	roundedNum = round(t_num);
//	std::cout << roundedNum;
//}

#include <iostream>

int main()
{
	const int width = 10;
	const int height = 10;

	int house[height][width] = {
	{0, 0, 0, 0, 1, 0, 0, 0, 0, 0},
	{0, 0, 0, 1, 1, 1, 0, 0, 0, 0},
	{0, 0, 1, 1, 0, 1, 1, 0, 0, 0},
	{0, 1, 1, 0, 0, 0, 0, 1, 1, 0},
	{0, 1, 0, 1, 1, 1, 0, 0, 1, 0},
	{0, 1, 0, 1, 0, 1, 0, 0, 1, 0},
	{0, 1, 0, 1, 1, 1, 0, 0, 1, 0},
	{0, 1, 0, 0, 0, 0, 0, 0, 1, 0},
	{0, 1, 1, 1, 1, 1, 1, 1, 1, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	};

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < width; c++)
		{
			if (house[r][c] == 0)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << house[r][c];
			}
		}
		std::cout << "\n";
	}


	for (int r = 0; r < height; r++)
	{
		for (int c = r; c < width; c++)
		{
			int temp = house[r][c];
			house[r][c] = house[c][r];
			house[c][r] = temp;
		}

	}

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < (width / 2); c++)
		{
			int temp = house[r][c];
			house[r][c] = house[r][height - c - 1];
			house[r][height - c - 1] = temp;
		}
	}

	std::cout << "90 degree rotation clockwise" << std::endl;

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < width; c++)
		{
			if (house[r][c] == 0)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << house[r][c];
			}
		}
		std::cout << "\n";
	}



	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < (width / 2); c++)
		{
			int temp = house[r][c];
			house[r][c] = house[r][height - c - 1];
			house[r][height - c - 1] = temp;
		}
	}

	for (int r = 0; r < height; r++)
	{
		for (int c = r; c < width; c++)
		{
			int temp = house[r][c];
			house[r][c] = house[c][r];
			house[c][r] = temp;
		}

	}



	std::cout << "90 degree rotation anti clockwise" << std::endl;

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < width; c++)
		{
			if (house[r][c] == 0)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << house[r][c];
			}
		}
		std::cout << "\n";
	}

	for (int r = 0; r < height; r++)
	{
		for (int c = r; c < width; c++)
		{
			int temp = house[r][c];
			house[r][c] = house[c][r];
			house[c][r] = temp;
		}

	}

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < (width / 2); c++)
		{
			int temp = house[r][c];
			house[r][c] = house[r][height - c - 1];
			house[r][height - c - 1] = temp;
		}
	}

	for (int r = 0; r < height; r++)
	{
		for (int c = r; c < width; c++)
		{
			int temp = house[r][c];
			house[r][c] = house[c][r];
			house[c][r] = temp;
		}

	}

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < (width / 2); c++)
		{
			int temp = house[r][c];
			house[r][c] = house[r][height - c - 1];
			house[r][height - c - 1] = temp;
		}
	}

	std::cout << "180 degree rotation" << std::endl;

	for (int r = 0; r < height; r++)
	{
		for (int c = 0; c < width; c++)
		{
			if (house[r][c] == 0)
			{
				std::cout << " ";
			}
			else
			{
				std::cout << house[r][c];
			}
		}
		std::cout << "\n";
	}
	return 0;
}