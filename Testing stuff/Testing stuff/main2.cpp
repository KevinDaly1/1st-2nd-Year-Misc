#include <iostream>
#include <string>

// Global Variables
const int MAX_TEAMS = 8;  // maximum number of teams allowed
int noOfTeams = 6;		// the number of active teams 

std::string teamNames[MAX_TEAMS];
int teamScores[MAX_TEAMS];
int teamLevels[MAX_TEAMS];

void initializeArrays();
void displayReverse();
std::string findLastScore(int t_score);
std::string findHighestLevel();
int insertNewTeam(std::string t_name, int t_score, int t_level);

int main()
{
	std::string name = "Kevin";

	initializeArrays();
	displayReverse();
	std::cout << findLastScore(30) << std::endl;
	std::cout << findHighestLevel() << std::endl;
	std::cout << "index pos " << insertNewTeam(name, 40, 4) << std::endl;

	system("Pause");
	return 0;
}

void initializeArrays()
// initializes the 3 arrays
{
	teamNames[0] = "Wild Cats";
	teamNames[1] = "Bombers Blast";
	teamNames[2] = "Summer Blues";
	teamNames[3] = "Salute Rangers";
	teamNames[4] = "Super Dudes";
	teamNames[5] = "Rascals";

	teamScores[0] = 10;
	teamScores[1] = 30;
	teamScores[2] = 5;
	teamScores[3] = 30;
	teamScores[4] = 10;
	teamScores[5] = 45;

	teamLevels[0] = 1;
	teamLevels[1] = 2;
	teamLevels[2] = 3;
	teamLevels[3] = 1;
	teamLevels[4] = 2;
	teamLevels[5] = 1;
}

void displayReverse()
{
	for (int i = noOfTeams - 1; i >= 0; i--)
	{
		if (teamLevels[i] == 1 || teamLevels[i] == 3)
		{
			std::cout << teamNames[i] << " score " << teamScores[i] << " and level " << teamLevels[i] << std::endl;
		}
	}
}

std::string findLastScore(int t_score)
{
	std::string lastScore = "";

	for (int i = 0; i < noOfTeams; i++)
	{
		if (teamScores[i] == t_score)
		{
			lastScore = "Team " + teamNames[i] + ", level " + std::to_string(teamLevels[i]) + ", index position \n" + std::to_string(i);
		}
	}
	

	return lastScore;
}

std::string findHighestLevel()
{
	std::string highestLevelAndCount = ""; // string to be returned containing the highest level and how many times it occurs
	int highestLevel = 0; // the highest level
	int highestLevelCount = 0; // amount of people at the highest level

	for (int i = 0; i < noOfTeams; i++)
	{
		if (teamLevels[i] > highestLevel)
		{
			highestLevel = teamLevels[i];
			highestLevelCount = 1;
		}
		
		else if (teamLevels[i] == highestLevel)
		{
			highestLevelCount++;
		}

		if (highestLevel == 0)
		{
			highestLevelAndCount = "There are no active teams.";
		}
		else
		{
			highestLevelAndCount = "The highest level found is " + std::to_string(highestLevel) + " and it occurs " + std::to_string(highestLevelCount) + " time(s).";
		}
	}

	return highestLevelAndCount;
}

int insertNewTeam(std::string t_name, int t_score, int t_level)
{
	int index = 0;
	bool found = false;

	for (; index < noOfTeams; index++)
	{
		if (teamNames[index] == t_name)
		{
			teamScores[index] = t_score;
			teamLevels[index] = t_level;
			found = true;
			break;
		}
	}

	if (!found)
	{
		if (noOfTeams == MAX_TEAMS)
		{
			index = -1;
		}
		else
		{
			teamNames[noOfTeams] = t_name;
			teamScores[noOfTeams] = t_score;
			teamLevels[noOfTeams] = t_level;
			noOfTeams++;
		}
	}

	return index;
}
