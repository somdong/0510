#include <iostream>
#include <time.h>
#define MAX 52
using namespace std;
int main()
{
	int Card[MAX] = { 0, };
	int Player[3] = { 0, };
	int AI[3] = { 0, };

	for (int i = 0; i < MAX; i++)
	{
		Card[i] =(i % 13)+ 1;
	}
	srand((unsigned int)time(NULL));

	for (int i = 0; i < MAX * 2; i++)
	{
		int FirstIndex = rand() % MAX;
		int SecondIndex = rand() % MAX;

		int Temp = Card[FirstIndex];
		Card[FirstIndex] = Card[SecondIndex];
		Card[SecondIndex] = Temp;
	}


	for (int i = 0; i < 3; i++)
	{
		Player[i] = Card[2 * i];
		AI[i] = Card[2 * i + 1];
	}

	int PlayerSum = 0;
	int AISum = 0;

	cout << "Player" << '\t' << "AI" << endl;

	for (int i = 0; i < 3; i++)
	{
	

	/*	switch (Player[i] / 13)
		{
		case 0:
			cout << "¡ß";
			break;
		case 1:
			cout << "¢¼";
			break;
		case 2:
			cout << "¢¾";
			break;
		case 3:
			cout << "¢À";
			break;
		}

		switch (Player[i] % 13)
		{
		case 0:
			cout << "A";
			break;
		case 10:
			cout << "J";
			break;
		case 11:
			cout << "Q";
		case 12:
			cout << "K";
			break;
		default:
			cout << (Player[i] % 13) + 1;
			break;
		}

		switch (AI[i] / 13)
		{
		case 0:
			cout << "¡ß";
			break;
		case 1:
			cout << "¢¼";
			break;
		case 2:
			cout << "¢¾";
			break;
		case 3:
			cout << "¢À";
			break;
		}

		switch (AI[i] % 13)
		{
		case 0:
			cout << "A";
			break;
		case 10:
			cout << "J";
			break;
		case 11:
			cout << "Q";
		case 12:
			cout << "K";
			break;
		default:
			cout << (AI[i] % 13) + 1;
			break;
		}*/

		cout << Player[i] << '\t' << AI[i] << endl;
	}


	for (int i = 0; i < 3; i++)
	{
		PlayerSum += (Player[i] > 10) ? 10 : Player[i];
		AISum += (AI[i] > 10) ? 10 : AI[i];
	}

	if (((PlayerSum > AISum) && PlayerSum <= 21) || (PlayerSum > 21 && AISum > 21) || (PlayerSum == AISum) || (AISum > 21))
	{
		cout << "Winner is a Player!!" << endl;
	}
	else if (((AISum > PlayerSum) && AISum <= 21) || (PlayerSum > 21 && AISum < 21))
	{
		cout << "Winner is an AI!!" << endl;
	}



	return 0;
}