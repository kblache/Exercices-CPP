#include <iostream>
#include <cstdlib>
#include <time.h>
#include <array>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::array;

int main(int argc, char argv[])
{
	srand((unsigned int)time(0));
	array<string, 5> wordsBank{ "Gaetan", "Programmation", "ArtFx", "CPlusPlus", "Facile" };
	string wordChoosed = wordsBank[rand() % 5];
	string wordChoosedSave = wordChoosed;
	bool isWordFounded = false;
	string wordGuessedByPlayer;
	int wordLength = wordChoosed.length();
	char tempoLetter;

	for (int i = 0; i < wordLength; i++)
	{
		int index1 = rand() % wordLength;
		int index2 = rand() % wordLength;
		char letterA = wordChoosed[index1];
		char letterB = wordChoosed[index2];
		tempoLetter = letterA;
		letterA = letterB;
		letterB = tempoLetter;
		wordChoosed[index1] = letterA;
		wordChoosed[index2] = letterB;
	}

	do 
	{
		cout << "The word you have to guess is :" << endl;
		cout << wordChoosed << endl;
		cout << "Enter your guess to try or quit to quit: ";
		cin >> wordGuessedByPlayer;
		cout << endl;

		if (wordGuessedByPlayer == wordChoosedSave)
		{
			cout << "You guess right! The word was: " << wordChoosedSave;
			isWordFounded = true;
		}
		else if (wordGuessedByPlayer == "quit")
		{
			cout << "You succesfully quit the game.";
			isWordFounded = true;
		}
		else
		{
			cout << "Your guess is wrong try again." << endl;
		}
	} while (!isWordFounded);

}