#include <iostream>
#include <cctype>
using namespace std;

// Brandon Altvater

int constCount(char*);
string stringConvert(char[], int);
int main()
{
	char words[51];

	cout << "Please enter a string no more than 50 characters" << endl;
	cin.getline(words,51);
	cout << "You have entered" << endl;
	cout << words << endl;
	cout << "And you have entered "  << constCount(words) << " constanants" << endl;


	return 0;
}
int constCount(char *strPtr)
{
	int count = 0;

	while(*strPtr != '\0')       

	{
		if (isalpha(*strPtr) && tolower(*strPtr) != 'a' && tolower(*strPtr) != 'e' && tolower(*strPtr) != 'i' && tolower(*strPtr) != 'o' && tolower(*strPtr) != 'u') 
		{
			count++;
		}
		strPtr++;
	}
	return count;
}