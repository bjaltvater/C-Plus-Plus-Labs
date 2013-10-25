#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	int number0;
	int number1;
	int number2;
	int number3;
	int number4;
	
	int sum = 0;

	cout << fixed << showpoint << setprecision(2);

	cout << "Please enter 5 integers separated by a space. " << endl;
	cin >> number0 >> number1 >> number2 >> number3 >> number4;

	sum = sum + number0 + number1 + number2 + number3 + number4;

	float average = float(sum) / 5;

	cout << "\nThe sum is " << sum << endl;
	cout << "The average is " << average << endl;

	return 0;
}