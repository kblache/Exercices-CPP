#include <iostream>
#include <array>

using std::cout;
using std::endl;
using std::array;

int main(int argc, char** argv)
{
	array<char, 7>name{ "Gaetan" };
	cout << "Size of total array: " << sizeof(name) << endl;
	cout << "Size of one element: " << sizeof(name[0]) << endl;
	cout << "Number of elements: " << sizeof(name) / sizeof(char) << endl;
	cout << endl;

	array<int, 4>vector{ 10,10,50,1 };
	cout << "Size of array: " << sizeof(vector) << endl;
	cout << "Size of one element: " << sizeof(vector[0]) << endl;
	cout << "Number of element: " << sizeof(vector) / sizeof(int) << endl;
	cout << endl;

	return 0;
}