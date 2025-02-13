#include <iostream>
#include <string>

struct person {
	std::string name;
	int age;
};

int main() {
	using namespace std;

	person p1 = {
		"bob",
		19,
	};

	cout << p1.name << ", " << p1.age << endl;

	person p2 = p1;

	cout << p2.name << ", " << p2.age << endl;

	p2.name[0] = 's';

	cout << p1.name << ", " << p1.age << endl;
	cout << p2.name << ", " << p2.age << endl;

	return 0;
}
