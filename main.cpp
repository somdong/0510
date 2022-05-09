#include <iostream>
#include <string>

using namespace std;

void Swap(int* A, int* B)
{
	int Temp = *A;
	*A = *B;
	*B = Temp;
}
int main()
{
	int A = 10;
	int B = 20;

	Swap(&A, &B);

	cout << A << ',' << B << endl;


	// 동적 할당

	int Count = 0;
	cin >> Count;

	int* Array = new int[Count];
	
	delete[] Array;

	return 0;
}