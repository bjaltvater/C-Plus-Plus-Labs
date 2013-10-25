#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main ()
{
	const int month = 12;
	double loanAmount;
	double payments;
	double interestRate;

	cout << fixed << showpoint << setprecision(2);
	
	cout << "What is the loan amount?" << endl;
	cin >> loanAmount; 

	cout << "How many payments do want there to be?" << endl;
	cin >> payments;

	cout << "What is the annual interest rate?" << endl;
	cin >> interestRate;
	cout << endl << endl;

	double rate = (interestRate / month) / 100;
	double monthlyPayment = ((pow((1 + rate),payments)* rate) / (pow((1+rate),payments) - 1)) * loanAmount;
	
	cout << "Monthly Interest Rate:" << right << setw(10) << rate << "%"<<endl;
	cout << "Monthly Payment:" << right << setw(13)<< "$" << monthlyPayment << endl;
	cout << "Amount Paid Back:" << right << setw(12)<< "$" << monthlyPayment * payments  << endl;
	cout << "Interest Paid:" << right<< setw(15)<< "$"<< (monthlyPayment * payments) - loanAmount << endl << endl;;

	return 0;
}

