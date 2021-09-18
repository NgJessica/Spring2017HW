#include<iostream>
#include<fstream>
using namespace std;

struct Point
{
	int x;
	int y;
	int z;
};

int main()
{
	const int SIZE = 3;
	Point array[SIZE];
	int coord;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "Coordinates for point " << i << ": ";
		cin >> array[i].x >> array[i].y >> array[i].z;
	}

	cout << "Point wanted for retrieval (0-2): ";
	cin >> coord;

	fstream x("z.cpp", ios::out | ios::binary);

	if (x)
	{
		x.write(reinterpret_cast<char*>(array), SIZE * sizeof(Point));

		x.close();
	}
	else
		cout << "Error" << endl;

	x.open("z.cpp", ios::in | ios::binary);

	if (x)
	{
		Point t[SIZE];
	
		x.read(reinterpret_cast<char*>(t), SIZE * sizeof(Point));
		x.close();

		cout << "The coordinates are: ";
		cout << t[coord].x << " " << t[coord].y <<" "<< t[coord].z << endl;
		
	}
	else
		cout << "Error!" << endl;

	return 0;
}

