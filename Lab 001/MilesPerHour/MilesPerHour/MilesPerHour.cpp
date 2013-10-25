#include <iostream>
using namespace std;

int main ()
{
	double miles;
	double hours;
	double milesPerHour;

	cout << "Please input the miles traveled" << endl;
	cin >> miles;

	cout << "Please input the hours spent in travel"<< endl;
	
	cin >> hours;

	milesPerHour = miles / hours;

	cout << "The average miles per hour is " << milesPerHour << endl;

	return 0;
}
