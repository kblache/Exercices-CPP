#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(int argc, char** argv)
{
	bool engineChoosed = false;
	bool weaponChoosed = false;

	enum quickEngine { QEspaceSpeed = 8, QEhyperspaceSpeed = 16, QEconsuptionPerMinute = 8 };
	enum balanceEngine { BEspaceSpeed = 6, BEhyperspaceSpeed = 8, BEconsuptionPerMinute = 4 };
	enum strongEngine { SEspaceSpeed = 4, SEhyperspaceSpeed = 4, SEconsuptionPerMinute = 16 };
	enum lightWeapon { LWdamage = 2, LWshieldPenetration = 1, LWfireRate = 10 };
	enum balanceWeapon { BWdamage = 4, BWshieldPenetration = 4, BWfireRate = 5 };
	enum heavyWeapon { HWdamage = 8, HWshieldPenetration = 16, HWfireRate = 2 };

	int playerChoice;
	
	int consuptionPerMinute;
	float spaceSpeed;
	float hyperspaceSpeed;

	int damage;
	float shieldPenetration;
	float fireRate;
	
	cout << "Hello dear player, thank you for choosing our services." << endl;

	while (!engineChoosed)
	{
		cout << "First choose your engine. We have three models: " << endl;
		cout << "Enter 1 for a quick engine." << endl;
		cout << "Enter 2 for a balance engine." << endl;
		cout << "Enter 3 for a strong engine." << endl;
		cin >> playerChoice;

		if (!cin)
		{
			cin.clear();
			cin.ignore(std::numeric_limits <std::streamsize>::max(), '\n');
			cout << "Enter a number please" << endl;
		}
		else
		{
			switch (playerChoice)
			{
			case 1:
			{
				quickEngine mySpeed = QEspaceSpeed;
				spaceSpeed = mySpeed;
				
				quickEngine myhyperspaceSpeed = QEhyperspaceSpeed;
				hyperspaceSpeed = myhyperspaceSpeed;
				
				quickEngine myconcuptionPerMinute = QEconsuptionPerMinute;
				consuptionPerMinute = myconcuptionPerMinute;
				
				engineChoosed = true;
				
				break;
			}
			case 2:
			{
				balanceEngine mySpeed = BEspaceSpeed;
				spaceSpeed = mySpeed;
				
				balanceEngine myhyperspacespeed = BEhyperspaceSpeed;
				hyperspaceSpeed = myhyperspacespeed;
				
				balanceEngine myconsuptionperminute = BEconsuptionPerMinute;
				consuptionPerMinute = myconsuptionperminute;
				
				engineChoosed = true;

				break;
			}
			case 3:
			{
				spaceSpeed = SEspaceSpeed;
				hyperspaceSpeed = SEhyperspaceSpeed;
				consuptionPerMinute = SEconsuptionPerMinute;

				engineChoosed = true;

				break;
			}
			default:
			{
				cout << "Enter a correct number please." << endl;
			}
			}
		}
	}
	
	while (!weaponChoosed)
	{
		cout << "Now please choose your weapon. We have three models to: " << endl;
		cout << "Enter 1 for a light weapon." << endl;
		cout << "Enter 2 for a balance weapon." << endl;
		cout << "Enter 3 for a heavy weapon." << endl;
		cin >> playerChoice;

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
			switch (playerChoice)
			{
			case 1:
				damage = LWdamage;
				shieldPenetration = LWshieldPenetration;
				fireRate = LWfireRate;

				weaponChoosed = true;
				
				break;
			
			case 2:
				damage = BWdamage;
				shieldPenetration = BWshieldPenetration;
				fireRate = BWfireRate;

				weaponChoosed = true;

				break;

			case 3:
				damage = HWdamage;
				shieldPenetration = HWshieldPenetration;
				fireRate = HWfireRate;

				weaponChoosed = true;

				break;

			default:
				cout << "Enter a correct number.";
			}
		}
	}

	cout << "Finally this is your ship statistics" << endl;
	cout << spaceSpeed << " speed." << endl;
	cout << hyperspaceSpeed << " hyperspace speed." << endl;
	cout << consuptionPerMinute << " consuption per minute." << endl;
	cout << damage << " damage." << endl;
	cout << shieldPenetration << " shield penetration." << endl;
	cout << fireRate << " fire rate." << endl;
}