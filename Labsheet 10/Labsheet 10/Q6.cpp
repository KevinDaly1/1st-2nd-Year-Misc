//Name: Kevin Daly
//Login: C00259089
//Date: 28/Jan/2021
//------------------------------------------------------------
// question 6,7,8,9,10,13,14,15,16: write a bunch of functions
// -----------------------------------------------------------
// Known Bugs:
// error checking on input

#include <iostream>
#include <string> // std::to_string

//global variables 
const int maxPlayers = 8; 
int noOfPlayers = 8; 

std::string namesArray[maxPlayers];
int healthArray[maxPlayers];

void initializeArrays(); 
void displayPlayers();
void displayReversePlayers();
void findLowestHealth();
void findHighestHealth();
void findAllHealthValues(int t_hValue);
int changePlayerHealth(std::string t_aName);
int findFirstHealthValue(int t_hValue);
int findLastName(std::string t_name);
std::string findSecondLowest();
int calculateSum();
float calculateAvg(float t_sum);
std::string findPlayerHealth(std::string t_name);
void insertPlayerAtEnd(std::string t_newName, int t_newHealth);
void deleteLastPlayer();



int main()
{
	initializeArrays(); // calls function to initialize arrays

	//variables
	float sum = calculateSum();
	float average = calculateAvg(sum);
	int hValue = 0; // health value to find in array 
	int indexValue = 0; // position of hValue in array 
	int nValue = 0; // last position in array of user entered name
	std::string name = ""; // user entered name
	std::string message = ""; // message to be outputted about player inputted
	std::string newName = ""; // user entered name for new player
	int newHealth = 0; // user entered health for new player
	std::string aName = ""; // name of player user wants to change the health of
	int indexPos = 0; // the index position of player aName

	//user input
	std::cout << "please input a health value to search for: ";
	std::cin >> hValue;

	std::cout << "please input a name to search for: ";
	std::cin >> name;


	std::cout << "please input a name for a new player: ";
	std::cin >> newName;

	std::cout << "please input a health value for the new player: ";
	std::cin >> newHealth;

	std::cout << "please input name of player you wish to change the health of: ";
	std::cin >> aName;

	deleteLastPlayer();
	insertPlayerAtEnd(newName,newHealth);
	indexPos = changePlayerHealth(aName);
	indexValue = findFirstHealthValue(hValue);
	nValue = findLastName(name);
	findAllHealthValues(hValue);
	message = findPlayerHealth(name);

	//display answers

	if (indexValue == -1)
	{
		std::cout << "health value " << hValue << " is not in the array" << std::endl;
	}
	else
	{
		std::cout << "the health value " << hValue << " is located at index position " << indexValue << std::endl;
	}

	std::cout << std::endl;

	if (nValue == -1)
	{
		std::cout << "the name " << name << " is not in the array" << std::endl;
	}
	else
	{
		std::cout << "the last occurence of the name " << name <<
		" is at index position " << nValue << std::endl;
	}

	if (indexPos == -1)
	{
		std::cout << "The player " << aName << " is not in the array" << std::endl;
	}
	else
	{
		std::cout << "the player " << aName <<
			"'s index position is: " << indexPos << std::endl;
	}

	std::cout << std::endl;

	displayPlayers();
	displayReversePlayers();
	findHighestHealth();
	findLowestHealth();
	std::cout << message << std::endl;
	std::cout << findSecondLowest();

	std::cout << "the sum of player health is " << sum << std::endl;
	std::cout << "the average player health is " << average << std::endl;

	system("pause");
	return 0;
}

/// <summary>
/// Initialize the two arrays 
/// </summary>
void initializeArrays()
{ 
	namesArray[0] = "Tom"; 
	namesArray[1] = "Sam"; 
	namesArray[2] = "Ann"; 
	namesArray[3] = "Ki"; 
	namesArray[4] = "Joe"; 
	namesArray[5] = "Ray"; 
	namesArray[6] = "Ann"; 
	namesArray[7] = "Sue"; 

	healthArray[0] = 3; 
	healthArray[1] = 6; 
	healthArray[2] = 2; 
	healthArray[3] = 1; 
	healthArray[4] = 4; 
	healthArray[5] = 6; 
	healthArray[6] = 1; 
	healthArray[7] = 6; 
}

/// <summary>
/// Calculates the sum of player health
/// </summary>
/// <returns>the sum of player health</returns>
int calculateSum()
{
	//variables
	float sum = 0;

	for (int count = 0; count < maxPlayers; count++)
	{
		sum += healthArray[count];
	}
	return sum;
}

/// <summary>
/// calculate the average player health
/// </summary>
/// <param name="t_sum">sum of player health</param>
/// <returns>the average</returns>
float calculateAvg(float t_sum)
{
	//variables
	float average = t_sum / maxPlayers;

	return average;
}

/// <summary>
/// finds user entered health value in array and outputs the name of that person if found.
/// if not a message is displayed telling the user the value wasn't found
/// </summary>
/// <param name="t_hValue">health value user searched for</param>
void findAllHealthValues(int t_hValue)
{

	int indexValue = -1;
	bool noMatch = true; // stays true until a player with the same health value of t_hValue is found

	for (int count = 0; count < maxPlayers; count++)
	{
		if (t_hValue == healthArray[count])
		{
			std::cout << namesArray[count] << " has a health of " << t_hValue << std::endl;
			noMatch = false;
		}
	}
	if (noMatch == true)
	{
		std::cout << "no player found with that health value" << std::endl;
	}
}

/// <summary>
/// finds the player in the namesArray with the name the user entered and asks the user to change their health
/// </summary>
/// <param name="t_aName">name the user wants to search for</param>
/// <returns>index position in array of the player</returns>
int changePlayerHealth(std::string t_aName)
{
	//variables

	int newHealth = 0;
	int indexPos = -1; // the position of t_aName in the array


	//user input
	std::cout << "Please input " << t_aName << "'s new health: ";
	std::cin >> newHealth;

	std::cout << std::endl;

	for (int count = noOfPlayers - 1; count >= 0; count--)
	{
		if (namesArray[count] == t_aName)
		{
			healthArray[count] = newHealth;
			indexPos = count;
			break;
		}
	}


	return indexPos;
}

/// <summary>
/// displays a list of all the players
/// </summary>
void displayPlayers()
{
	for (int count = 0; count < noOfPlayers; count++)
	{
		std::cout << "player " << namesArray[count] << " has a health of: ";
		std::cout << healthArray[count] << std::endl;
	}
	std::cout << std::endl;
}

/// <summary>
/// displays a list of all the players in reverse order
/// </summary>
void displayReversePlayers()
{
	for (int count = noOfPlayers - 1; count >= 0; count--)
	{
		std::cout << "player " << namesArray[count] << " has a health of: ";
		std::cout << healthArray[count] << std::endl;
	}
	std::cout << std::endl;

}

/// <summary>
/// finds the player with the highest health in the array and outputs their name and health
/// </summary>
void findHighestHealth()
{
	std::string highestHealthPlayer = "";
	int highestHealthValue = 0;

	for (int count = 0; count < maxPlayers; count++) // loops until all players have been checked for highest health
	{
		if (highestHealthPlayer == "") // initializes highestHealthPlayer to the first player
		{
			highestHealthPlayer = namesArray[count];
		}
		if (highestHealthValue == 0) // initializes highestHealthvalue to the first value
		{
			highestHealthValue = healthArray[count];
		}

		if (healthArray[count] > highestHealthValue)
		{
			highestHealthValue = healthArray[count];
			highestHealthPlayer = namesArray[count];
		}
	}
	std::cout << "the player with the highest health is " << highestHealthPlayer <<
	" with " << highestHealthValue << " health." << std::endl;
}

/// <summary>
/// finds the first player with the health the user searched for
/// and returns the index value of that player
/// </summary>
/// <param name="t_hValue">health value the user is searching for</param>
/// <returns>index position of player</returns>
int findFirstHealthValue(int t_hValue)
{
	//variable

	int indexValue = -1;

	for (int count = 0; count < maxPlayers; count++)
	{
		if (t_hValue == healthArray[count])
		{
			indexValue = count;
			break;
		}
	}

	return indexValue;
}

/// <summary>
/// finds the last occurrence of the name a user entered and returns the index position
/// of the name in the array
/// </summary>
/// <param name="t_name">name user searched for</param>
/// <returns>index value of name</returns>
int findLastName(std::string t_name)
{
	int nValue = -1; // last position of name in array

	for (int count = 0; count < noOfPlayers; count++)
	{
		if (t_name == namesArray[count])
		{
			nValue = count;
		}
	}

	return nValue;
}

/// <summary>
/// finds the player(s) with the second lowest health in the array and returns a string
/// </summary>
/// <returns>message containing the name and health of second lowest player</returns>
std::string findSecondLowest()
{
	//variables
	std::string message = "";
	int lowest = 0;
	int secondLowest = 10;


	if (lowest == 0) // initializes lowest  health to first player’s health
	{
		lowest = healthArray[0];
	}

	for (int count = 0; count <= noOfPlayers; count++)
	{
		if (healthArray[count] < lowest)
		{
			lowest = healthArray[count];
		}
	}

	for (int count = 0; count <= noOfPlayers; count++)
	{
		if (healthArray[count] == secondLowest)
		{
			message += ". The player " + namesArray[count] + " has the second lowest health with a value of " + std::to_string(healthArray[count]);
		}

		if (healthArray[count] < secondLowest && healthArray[count] != lowest)
		{
			secondLowest = healthArray[count];
			message = "The player " + namesArray[count] + " has the second lowest health with a value of "
			+ std::to_string(healthArray[count]); 
			std::cout << std::endl;
		}
	}
	return message;
}

/// <summary>
/// finds the player the user searched for and outputs a message with their name and health.
/// </summary>
/// <param name="t_name">name user searched for</param>
/// <returns>string with name and health</returns>
std::string findPlayerHealth(std::string t_name)
{
	std::string message = "";
	bool found = false;
	int count = 0;

	for (count = 0; count < maxPlayers; count++)
	{
		if (t_name == namesArray[count])
		{
			found = true;
			break;
		}
	}

	if (found == true)
	{
		message = "player " + namesArray[count] + " has a health of " + std::to_string(healthArray[count]);
	}

	if (found == false)
	{
		message = "there is no player called " + t_name + "in the game";
	}

	return message;
}

/// <summary>
/// adds a new player and their health to the last cell in the arrays
/// </summary>
/// <param name="t_aName">user entered new player name</param>
/// <param name="t_newHealth">user entered new player health</param>
void insertPlayerAtEnd(std::string t_aName, int t_newHealth)
{

	if (noOfPlayers < maxPlayers)
	{
		namesArray[noOfPlayers] = t_aName;
		healthArray[noOfPlayers] = t_newHealth;
		noOfPlayers++;
	}
	else
	{
		std::cout << "The lobby is currently full" << std::endl;
	}
}

/// <summary>
/// sets the last cells in the arrays containing a player to default values
/// </summary>
void deleteLastPlayer()
{

	namesArray[noOfPlayers -1] = "";
	healthArray[noOfPlayers -1] = 0;
	noOfPlayers--;

}

/// <summary>
/// finds the player with the lowest health in the array and outputs them to the screen
/// </summary>
void findLowestHealth()
{
	//variables
	
	std::string lowestHealthPlayer = "";
	int lowestHealthValue = 0;

	for (int count = 0; count < noOfPlayers; count++) // loops until all players have been checked for lowest health
	{
		if (lowestHealthPlayer == "") // initializes lowestHealthPlayer to the first player
		{
			lowestHealthPlayer = namesArray[count];
		}
		if (lowestHealthValue == 0) // initializes lowestHealthvalue to the first health value
		{
			lowestHealthValue = healthArray[count];
		}

		if (healthArray[count] < lowestHealthValue)
		{
			lowestHealthValue = healthArray[count];
			lowestHealthPlayer = namesArray[count];
		}
	}

	std::cout << "the player with the lowest health is " << lowestHealthPlayer <<
	" with " << lowestHealthValue << " health." << std::endl;

}