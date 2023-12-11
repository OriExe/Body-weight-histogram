#include <iostream>
#include <string>

using namespace std;


int main()
{
	int maxLength = 0;

	int group0_49 = 0;
	int group50_69 = 0;
	int group70_89 = 0;
	int group90_109 = 0;
	int group110_149 = 0;
	//
	float lowestBodyWeight = 149;
	float highestBodyWeight = 0;
	//
	float currentBodyWeight = 0;
	while (currentBodyWeight <= 149) //A loop that runs until the user gets a number more then 149
	{
		cout << "Enter the bodyweight of a customer who entered today" << endl;
		cin >> currentBodyWeight;
		if (currentBodyWeight > 149) //Breaks the loop when value higher then 149 is entered
		{
			break;
		}
		//When a number is entered it'll go through this if statement to find the correct group and increase the amount of people in that group
		if (currentBodyWeight >= 0 && currentBodyWeight <= 49)
		{
			group0_49++;
		}
		else if (currentBodyWeight >= 50 && currentBodyWeight <= 69)
		{
			group50_69++;
		}
		else if (currentBodyWeight >= 70 && currentBodyWeight <= 89)
		{
			group70_89++;
		}
		else if (currentBodyWeight >= 90 && currentBodyWeight <= 109)
		{
			group90_109++;
		}
		else if (currentBodyWeight >= 110 && currentBodyWeight <= 149)
		{
			group110_149++;
		}

		if (lowestBodyWeight > currentBodyWeight)
		{
			lowestBodyWeight = currentBodyWeight;
		}
		if (highestBodyWeight < currentBodyWeight)
		{
			highestBodyWeight = currentBodyWeight;
		}
	}

#pragma region Very Long If Statement
	//Tries to find the group with the the most customers
	if (group0_49 >= group50_69 && group0_49 >= group70_89 && group0_49 >= group90_109 && group0_49 >= group110_149)
	{
		maxLength = group0_49;
	}
	else if (group50_69 >= group0_49 && group50_69 >= group70_89 && group50_69 >= group90_109 && group50_69 >= group110_149)
	{
		maxLength = group50_69;
	}
	else if (group70_89 >= group0_49 && group70_89 >= group50_69 && group70_89 >= group90_109 && group70_89 >= group110_149)
	{
		maxLength = group70_89;
	}
	else if (group90_109 >= group0_49 && group90_109 >= group50_69 && group90_109 >= group70_89 && group90_109 >= group110_149)
	{
		maxLength = group90_109;
	}
	else if (group110_149 >= group0_49 && group110_149 >= group50_69 && group110_149 >= group70_89 && group110_149 >= group90_109)
	{
		maxLength = group110_149;
	}

#pragma endregion
	string group0_49Data = " ";
	string group50_69Data = " ";
	string group70_89Data = " ";
	string group90_109Data = " ";
	string group110_149Data = " ";

	//Gives each string value above a $ sign if the maxlengh is the same of the amount of people in that group. This is because the code works from top to bottom, so it would add the top dollar first then the lowest one last
	while (maxLength > 0)
	{
		if (group0_49 == maxLength)
		{
			group0_49Data = "$";
		}
		if (group50_69 == maxLength)
		{
			group50_69Data = "$";
		}
		if (group70_89 == maxLength)
		{
			group70_89Data = "$";
		}
		if (group90_109 == maxLength)
		{
			group90_109Data = "$";
		}
		if (group110_149 == maxLength)
		{
			group110_149Data = "$";
		}
		maxLength--;
		//Prints the bar now ig
		cout << "	" << group0_49Data << "	" << group50_69Data << "	" << group70_89Data << "	" << group90_109Data << "	" << group110_149Data << "	" << endl;
	}
	cout << "	" << "00-49" << "	" << "50-69" << "	" << "70-89" << "	" << "90-109" << "	" << "110-149" << endl << endl;


	//Lists important statistics
	cout << "Total number of customers who visited today:" << group0_49 + group50_69 + group70_89 + group90_109 + group110_149 << endl;
	cout << "Total number of customers below the weight of seventy:" << group50_69 + group0_49 << endl;
	cout << "The highest body weight someone weighed today:" << highestBodyWeight << endl;
	cout << "The lowest body weight someone weighed today:" << lowestBodyWeight << endl;
	return 0;
}