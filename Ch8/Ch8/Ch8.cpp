#include <iostream>
using namespace std;

void sort(int a[], int);
int bsearch(int a[], int, int);

int main()
{
	int num, result;
	int a[] = { 93121, 79422, 13579, 62483, 33445,
				26792, 55555, 85647, 77777, 26791 };
	cout << "Enter Lottery Number: ";
	cin >> num;
	
	sort(a, 10);
	result = bsearch(a, 10, num);

	if (result == -1)
		cout << "You Lose!";
	else
		cout << " You Win!";

	cin.ignore();
	cin.get();

}

void sort(int a[], int L)
{
	bool swapped = false;
	do
	{
		swapped = false;

		for (int i = 1; i < L; i++)
		{
			if (a[i] < a[i - 1])
			{
				int t = a[i];
				a[i] = a[i - 1];
				a[i - 1] = t;
				swapped = true;
			}
		}
	} while (swapped == true);
}

int bsearch(int a[], int S, int t)
{
	int L = 0, R = S - 1, M;
	do
	{
		M = (L + R) / 2;
		if (a[M] == t)
			return M;
		else if (a[M] > t)
			R = M - 1;
		else
			L = M + 1;
	} while (L <= R);
	return -1;
}