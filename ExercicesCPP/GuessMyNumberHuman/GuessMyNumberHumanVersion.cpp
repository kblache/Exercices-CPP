#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
	bool numberFound = false;
	int numberToFind = 10;
	int numberOfTry = 0;
	int playerGuess;

	while (!numberFound)
	{
		cout << "Try to guess the hidden number." << endl;
		cout << "Enter your guess: ";
		cin >> playerGuess;
		cout << endl;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
			cout << "Enter a number please" << '\n';
		}
		else
		{
			if (playerGuess == numberToFind)
			{
				numberOfTry++;
				cout << "You guess right !" << endl;
				cout << "The number was: " << numberToFind << endl;
				cout << "And you take: " << numberOfTry << " tries to found it." << endl;
				numberFound = true;
			}
			else if (playerGuess < numberToFind && playerGuess < 0)
			{
				numberOfTry++;
				cout << "Your guess is to low. Retry !" << endl;
				cout << "Also, the number is not smaller than 0." << endl;
			}
			else if (playerGuess < numberToFind)
			{
				numberOfTry++;
				cout << "Your guess is to low. Retry !" << endl;
			}
			else if (playerGuess > numberToFind && playerGuess > 20)
			{
				numberOfTry++;
				cout << "Your guess is to high. Retry !" << endl;
				cout << "Also, the number is not greater than 20." << endl;
			}
			else
			{
				numberOfTry++;
				cout << "Your guess is to high. Retry !" << endl;
			}
		}

	}
}