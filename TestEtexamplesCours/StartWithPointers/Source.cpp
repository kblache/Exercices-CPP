#include <iostream>

using std::cout;
using std::endl;

int main() 
{
	int* scorePointer = nullptr;
	int score = 1000;
	int newscore = 5000;
	scorePointer = &newscore;

	cout << &score << endl;
	cout << &newscore << endl;
	cout << scorePointer << endl;
	cout << score << endl;
	cout << newscore << endl;
	cout << *scorePointer << endl;

	scorePointer += 500;
	cout << scorePointer << endl;
}