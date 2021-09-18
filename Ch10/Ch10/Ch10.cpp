#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;

char* upper(char*);
char* lower(char*);
char* reverse(char*);
void print(char*);

int main()
{
	const int s = 100;
	char xstring[s];
	
	cout << "Enter a string. The limit is 100 characters." << endl;
	cin.getline(xstring, s);

	reverse(xstring);
	cout << "Reverse: ";
	print(xstring);
	
	lower(xstring);
	cout << "Lower: ";
	print(xstring);

	upper(xstring);
	cout << "Upper: ";
	print(xstring);

	cin.get();

	return 0;
}

char* upper(char* string)
{
	int y = strlen(string);
	for (int x = 0; x < y; x++)
	{
		if (islower(string[x]))
			string[x] = toupper(string[x]);
	}
	return string;
}

char* lower(char* string)
{
	int y = strlen(string);
	for (int x = 0; x < y; x++)
	{
		if (isupper(string[x]))
			string[x] = tolower(string[x]);
	}
	return string;
}

char* reverse(char* string)
{
	int y = strlen(string);
	for (int x = 0; x < y; x++)
	{
		if (isupper(string[x]))
			string[x] = tolower(string[x]);
		else
			string[x] = toupper(string[x]);
	}
	return string;
}

void print(char* string)
{
	for (int x = 0; string[x] != '\0'; x++)
		cout << string[x];

	cout << endl;
}