#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
	bool numberFound = false;
	bool endProgramme = false;

	int computerGuess = 10;
	int numberOfTry = 0;
	int playerNumber;

	int minValue = 0;
	int maxValue = 0;

	while (!endProgramme)
	{
		cout << "Billy can try to guess your number." << endl;
		cout << "Enter your number: ";
		cin >> playerNumber;
		cout << endl;

		while (!numberFound)
		{

			if (!cin)
			{
				cin.clear();
				cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
				cout << "Enter a number please" << endl;
				cout << "Billy can't deal with this..." << endl;
				break;
			}
			else
			{
				if (computerGuess == playerNumber)
				{
					numberOfTry++;
					cout << "Billy guess right !" << endl;
					cout << "The number was: " << playerNumber << endl;
					cout << "It take: " << numberOfTry << " try to found it." << endl;
					numberFound = true;
					endProgramme = true;
				}
				else if (maxValue < playerNumber)
				{
					numberOfTry++;
					minValue = maxValue;
					maxValue = maxValue + 1000;
					computerGuess = maxValue;
				}
				else if (minValue > playerNumber)
				{
					numberOfTry++;
					maxValue = minValue;
					minValue = minValue - 1000;
					computerGuess = minValue;
				}
				else if ((maxValue + minValue)/2 > playerNumber)
				{
					numberOfTry++;
					maxValue = (maxValue + minValue) / 2;
				}
				else if ((maxValue + minValue) / 2 < playerNumber)
				{
					numberOfTry++;
					minValue = (maxValue + minValue) / 2;
				}
				else
				{
					numberOfTry++;
					computerGuess = (maxValue + minValue) / 2;
				}
			}

		}
	}

}