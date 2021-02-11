#include <iostream>
#include <array>
#include <vector>

using std::array;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	array <int, 6> numbers{0,1,2,3,4,5};

	for (auto i : numbers) 
	{
		cout << i << ' ';
	}
	cout << endl;

	vector<int> v{ 7,5,16,8 };

	v.push_back(25);
	v.push_back(13);

	for (int n : v)
	{
		cout << n << endl;
	}
}