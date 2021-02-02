#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(int argc, char** argv)
{
	float score1;
	float score2;
	float score3;
	
	cout << "enter your first score: ";
	cin >> score1;
	cout << endl;

	cout << "enter your second score: ";
	cin >> score2;
	cout << endl;
	
	cout << "enter your third score: ";
	cin >> score3;
	cout << '\n' << endl;

	cout << "Your average is: " << (score1 + score2 + score3) / 3 << " points" << endl;
	cout << "At least you participate :)\n";
}