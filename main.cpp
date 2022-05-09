#include <iostream>
#include <string>

using namespace std;


int main()
{
	int* PA = nullptr;

	PA = new int;


	*PA = 10;

	int* PB = PA;

	delete(PB);

	PB = nullptr;
	PA = nullptr;

	cout << *PA << endl;

	delete PA;

	return 0;
}