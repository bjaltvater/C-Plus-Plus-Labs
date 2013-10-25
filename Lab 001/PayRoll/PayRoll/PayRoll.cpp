// Brandon Altvater

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int hoursWorked;
	int payRate;
	double grossPay;
	double tax;
	double netPay;

	cout << fixed << setprecision (2);

	cout << "Please input the hours worked for the year" << endl;
	cin >> hoursWorked;

	cout << "Please input the pay rate per hour" << endl;
	cin >> payRate;

	grossPay = hoursWorked * payRate;

	if (grossPay < 20000)
	{
		tax = grossPay * .1;
		
	} else if ( grossPay > 50000)
	{	
		tax = grossPay * .3;
	}else
	{
		tax =  grossPay *.15;
	}
		
	netPay =  grossPay - tax;	
	
	cout << "The gross pay is $" << grossPay << endl;
	cout << "The tax is $" << tax << endl;
	cout << "The net pay is $" << netPay << endl;

}