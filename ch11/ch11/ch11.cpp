#include<iostream>
#include<string>
#include <iomanip>
using namespace std;

struct player
{
	string name;
	int number;
	int score;
};

int main()
{
	player array[5];
	for (int x = 0; x < 5; x++)
	{
		cout << "PLAYER " << x + 1 << endl;
		cout << "Player name: ";
		cin >> array[x].name;
		cout << "Player number: ";
		cin >> array[x].number;
		cout << "Player score: ";
		cin >> array[x].score;
		cout << endl;
	}


	cout << left << setw(15) << "PLAYER" << setw(15) << "NUMBER" << setw(15) << "POINTS" << endl;

	for (int x = 0; x < 5; x++)
	{
		cout << left;
		cout << setw(15) << array[x].name;
		cout << setw(15) << array[x].number;
		cout << setw(15) << array[x].score << endl;
	}
	
	cout << "Total points: " << array[0].score + array[1].score + array[2].score + array[3].score + array[4].score << endl;

	int mostpts = array[0].score;
	string p = array[0].name;
	for (int x = 0; x < 5; x++)
	{
		if (array[x].score > mostpts)
		{
			mostpts = array[x].score;
			p= array[x].name;
		}

	}
	cout << "\nThe player with the most points is: " << p << "  " << mostpts << endl;

	return 0;
}

