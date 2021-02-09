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
	bool isWordFounded = false;
	bool playerWantToQuit = false;
	int playerScore = 0;
	int numberOfGuessedWords = 0;
	int numberOfPlayerTry = 0;
	int numberOfIntAsked = 0;
	srand((unsigned int)time(0));

	while (!playerWantToQuit)
	{
		array<string, 5> wordsBank{ "Gaetan", "Programmation", "ArtFx", "CPlusPlus", "Facile" };
		array<string, 5> intBank{ "The best ArtFx progamming teacher", "What i am learning with this code","My school","The langage i am learning","what c++ is not" };
		int index = rand() % 5;
		string wordChoosed = wordsBank[index];
		string wordInt = intBank[index];
		string wordChoosedSave = wordChoosed;
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
			cout << '\n';
			cout << "You earn 1 point per letters in the word, you loose 10 points each time you ask for an int." << endl;
			cout << '\n';
			cout << "Your actual score is: " << playerScore;
			cout << '\n';
			cout << "The word you have to guess is :" << endl;
			cout << '\n' << wordChoosed << endl;
			cout << "\nEnter your guess to try, quit to quit or int to have a beautiful and shiny int: ";
			cin >> wordGuessedByPlayer;
			cout << endl;

			if (wordGuessedByPlayer == wordChoosedSave)
			{
				cout << "You guess right! The word was: " << wordChoosedSave;
				numberOfGuessedWords++;
				numberOfPlayerTry++;
				isWordFounded = true;
				playerScore += wordLength;
			}
			else if (wordGuessedByPlayer == "quit")
			{
				cout << "You succesfully quit the game." << endl;
				cout << "Your final score was: " << playerScore << endl;
				cout << "For " << numberOfGuessedWords << " guessed words." << endl;
				cout << "and " << numberOfPlayerTry << " try." << endl;
				cout << "You also ask for an int " << numberOfIntAsked << " time.";
				isWordFounded = true;
				playerWantToQuit = true;
			}
			else if (wordGuessedByPlayer == "int")
			{
				cout << "The int is: " << wordInt << endl;
				playerScore -= 10;
				numberOfIntAsked++;
			}
			else
			{
				cout << "Your guess is wrong try again." << endl;
				numberOfPlayerTry++;
			}
		} while (!isWordFounded);

	}
}