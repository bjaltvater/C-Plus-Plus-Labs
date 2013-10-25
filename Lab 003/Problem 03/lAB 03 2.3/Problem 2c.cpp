//Brandon Altvater

#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	int personCount = 1;
	int choice;
	int coffeeCount = 0;
	int teaCount = 0;
	int cokeCount = 0;
	int ojuiceCount = 0;
	
		cout << endl << endl;	
		cout << "Favorite Beverage Choices" << endl << endl;
		cout << "1 for Coffee" << endl;
		cout << "2 for Tea"<< endl;
		cout << "3 for Coke" << endl;
		cout << "4 for Orange Juice" << endl <<endl << endl; 

	do
	{
		cout << "Please enput the favorite beverage of person #" << personCount <<": Choose 1,2,3, or 4 from the" << endl;
		cout << "above meny or -1 to exit the program" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: coffeeCount ++;
			personCount++;
			break;
		case 2: teaCount ++;
			personCount++;
			break;
		case 3: cokeCount ++;
			personCount++;
			break;
		case 4: ojuiceCount ++;
			personCount++;
			break;
		case -1:
			personCount--;
			break;
		default:
			cout << "Please enter a valid selection" << endl;
		}

	}while (choice > 0);

		cout << "The total number of people surveyed is " << personCount<< ". The results are as follows:" << endl;
		cout << "******************************" << endl;
		cout << "Coffee " << coffeeCount << endl;
		cout << "Tea " << teaCount << endl;
		cout << "Coke " << cokeCount << endl;
		cout << "Orange Juice " << ojuiceCount << endl;
	
	return 0;
}


