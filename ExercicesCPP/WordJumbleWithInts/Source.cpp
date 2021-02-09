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
	array<string, 5> intBank{ "The best ArtFx progamming teacher", "What i am learning with this code","My school","The langage i am learning","what c++ is not"};
	int index = rand() % 5;
	string wordChoosed = wordsBank[index];
	string wordInt = intBank[index];
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
		cout << "Enter your guess to try, quit to quit or int to have a beautiful and shiny int: ";
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
		else if (wordGuessedByPlayer == "int")
		{
			cout << "The int is: " << wordInt << endl;
		}
		else
		{
			cout << "Your guess is wrong try again." << endl;
		}
	} while (!isWordFounded);

}