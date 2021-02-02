#include <iostream>

using std::cout;
using std::cin;
using std::string;
using std::endl;

int main(int argc, char** argv)
{
	int adventurers;
	int killedAdventurers;
	string leaderName;
	int numberOfGoldsPiece;

	cout << "Enter a number: ";
	cin >> adventurers;
	cout << endl;
	
	cout << "Enter a number: ";
	cin >> killedAdventurers;
	cout << endl;
	
	cout << "Enter a number: ";
	cin >> numberOfGoldsPiece;
	cout << endl;

	cout << "Enter a name: ";
	cin >> leaderName;
	cout << endl;

	cout << '\n';
	cout << "There is your story: \n";
	cout << leaderName << " was the leader of " << adventurers << " adventurers." << endl;
	cout << "He became their chief after killing " << killedAdventurers << " adventurers" << endl;
	cout << "and collected " << numberOfGoldsPiece << " golden pieces of treasure" << endl;

	return 0;
}