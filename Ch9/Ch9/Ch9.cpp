#include<iostream>
using namespace std;

int * function(int array[], int s)
{
	for (int y = 0, x = s - 1; y < x; y++, x--)
	{
		int temp = array[y];
		array[y] = array[x];
		array[x] = temp;
	}
	int * p = array;
	return p;
}

int main()
{
	int s, i;
	cout << "Enter size of array: ";
	cin >> s;

	int * array = new int[s];

	cout << endl << "Enter numbers in array: ";
	for ( i = 0; i < s; i++)
		cin >> array[i];

	cout << "Reverse of array: ";
	int *reverse = function(array, s);
	for (int i = 0; i < s; ++i)
	{
		cout << *(reverse + i) << " ";
	}

	delete []array;
	return 0;
}