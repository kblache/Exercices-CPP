#include <iostream>
#include <cstdlib>
#include <time.h>

using std::cout;
using std::endl;

int main(int argc, char** argv[])
{
	srand((unsigned int)time(0));
	int randomNumber = rand();

	cout << "I draw the number " << randomNumber << " out of " << RAND_MAX << " + 1 numbers." << endl;
}