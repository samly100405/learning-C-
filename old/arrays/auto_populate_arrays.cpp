#include <iostream>

int main()
{
	using namespace std;

	// this will auto populate the rest of the array with 0.
	// The first element will be 1, rest is 0
	int bum[3] = {1};

	cout << bum[0] << ", " << bum[1] << ", " << bum[2] << ", ";

	return 0;
}

