/*#include <iostream>
#include <iomanip>

using namespace std;

// Function Prototypes
float totalBill(float, float, float&);
float totalBill(float, float, float, float& );

int main ()
{
	int member;
	float serviceCharge;
	float testCharge;
	float medicineCharage;
	float total;

	cout << "Please input a one if you are member of the dental plan" << endl;
	cout << "Input any other number if you are not" << endl;
	cin >> member;

	cout << fixed << showpoint << setprecision(2);
	if (member == 1)
	{
		cout << "Please input the service charges" << endl;
		cin >> serviceCharge;
		cout << "Please input the test charges" << endl;
		cin >> testCharge;
		cout << "The total bill is $" << totalBill(serviceCharge, testCharge, total) << endl;
	}
	else
	{
		cout << "Please input the service charges" << endl;
		cin >> serviceCharge;
		cout << "Please input the test charges" << endl;
		cin >> testCharge;
		cout << "Please input the medicine charges" << endl;
		cin >> medicineCharage;

		cout << "The total bill is $"<< totalBill(serviceCharge, testCharge, medicineCharage, total) << endl;

	}
	
	return 0;

}
float totalBill(float service, float test, float & bill)
{
	bill = service + test;
	return bill;
}
float totalBill(float service, float test, float medicine, float & bill)
{
	bill = service + test + medicine;
	return bill;
}*/