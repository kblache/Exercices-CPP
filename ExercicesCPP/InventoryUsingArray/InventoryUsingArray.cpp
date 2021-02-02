#include <iostream>
#include <string>
#include <array>

using std::cout;
using std::endl;
using std::cin;
using std::array;
using std::string;

int main(int argc, char argv[])
{
	const int max_items = 10;
	array<string, max_items> inventory{};
	int numItems = 0;
	inventory[numItems++] = "sword";
	inventory[numItems++] = "armor";
	inventory[numItems++] = "shield";

	int trade;

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << i << ", " << inventory[i] << endl;
	}

	cout << "Enter any key to exchange sword with battle axe.";
	cin >> trade;
	cout << endl;

	inventory[0] = "battle axe";

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << i << ", " << inventory[i] << endl;
	}
}