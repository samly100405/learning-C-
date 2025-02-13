#include <iostream>

int main()
{
	using namespace std;

	// This is strictly not allowed. 
	int yams[3] = {1,2,3};
	int mays[3];
	mays = yams;
	// This won't compile. 


	cout << mays[0] << ", " << mays[1] << ", " << mays[2] << ", ";

	return 0;
}

