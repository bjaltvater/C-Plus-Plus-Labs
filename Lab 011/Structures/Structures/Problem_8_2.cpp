/*#include <iostream>
#include <iomanip>

using namespace std;


// This program demonstrates partially initialized strucure variables

// Brandon Altvater

struct taxPayer
{
	char name[25];
	long int socialSecNum;
	float taxRate;
	float income;
	float taxes;
};

int main()
{
	taxPayer citizen1 = { "Tim McGuiness", 255871234, .35 };
	taxPayer citizen2 = { "John Kane", 278990582, .29 };
	
	cout << fixed << showpoint << setprecision(2);
		
	// calculate taxes due for citizen1
	cout << "Enter this year's income for " << citizen1.name << ":";
	cin >> citizen1.income;
	
	citizen1.taxes = citizen1.income * citizen1.taxRate;
	
	cout << "Name: " << citizen1.name << endl;
	cout << "Social Security Number: " << citizen1.socialSecNum << endl;
	
	cout << "Taxes due for this year: $" << citizen1.taxes << endl << endl;

	// calculate taxes due for citizen2

	cout << "Enter this year's income for " << citizen2.name << ":";
	cin >> citizen2.income;

	citizen2.taxes = citizen2.income * citizen2.taxRate;


	cout << "Name: " << citizen2.name << endl;
	cout << "Social Security Number: " << citizen2.socialSecNum << endl;

	cout << "Taxes due for this year: $" << citizen2.taxes << endl << endl;

	return 0;
}*/

