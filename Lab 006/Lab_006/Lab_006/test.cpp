#include <iostream>
#include <iomanip>

using namespace std;

int main (){

	double hoursWorked, payRate, taxes, totalPay;

	cout << "Enter of number of hours worked: " << endl;
	cin >> hoursWorked;

	cout << "Enter payrate per hour: ";
	cin >> payRate;

	totalPay = hoursWorked * payRate;
	taxes = totalPay * .10;
	
	cout << showpoint << fixed << setprecision(2);

	cout << "Total pay equals " << totalPay - taxes << endl;	


	return 0;

}