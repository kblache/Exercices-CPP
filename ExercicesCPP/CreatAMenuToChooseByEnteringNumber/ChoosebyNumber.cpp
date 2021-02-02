#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
	int choice;

	cout << "Enter 1 to pick a gun" << endl;
	cout << "Enter 2 to pick a cake" << endl;
	cout << "Enter 3 to pick a K7" << endl;
	cin >> choice;
	cout << '\n' << endl;

	if (choice == 1)
	{
		cout << "You pick a gun";
		cout << '\n' << endl;
	}
	else if (choice == 2)
	{
		cout << "You pick a cake";
		cout << '\n' << endl;
	}
	else if (choice == 3)
	{
		cout << "You pick a K7";
		cout << '\n' << endl;
	}
	else
	{
		cout << "Lmao you thought you can go away ?";
		cout << '\n' << endl;
	}
}