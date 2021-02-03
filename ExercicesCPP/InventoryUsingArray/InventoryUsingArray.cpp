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
	int size = 0;
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

	inventory[0] = "battle axes";

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << i << ", " << inventory[i] << endl;
	}

	size = inventory[4].length();

	cout << endl;
	cout << "Number of letters in first item slot: ";
	cout << size << endl;

	cout << endl;
	cout << "Add healing potions until full and display." << endl;

	for (int i = 0; i < max_items; i++)
	{
		if (inventory[i].length() == 0)
		{
			inventory[i] = "Healing potion";
		}
	}

	for (int i = 0; i < inventory.size(); i++)
	{
		cout << i << ", " << inventory[i] << endl;
	}
}