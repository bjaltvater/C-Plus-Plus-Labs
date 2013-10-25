#include <iostream>

using namespace std;

void swap(float &, float &);

int main ()
{
	float first;
	float second;
	
	cout << "Enter the first number\nThen hit enter" << endl;
	cin >> first;

	cout << "Enter the second number\nThen hit enter" << endl;
	cin >> second;

	swap(first,second);

	cout << "After swapping, the fist number has the value of " << first << " which was the value of the\nsecond number." << endl;
	cout << "The second number has the value of " << second << " which was the value of the first number."<< endl;

	return 0;
}

void swap(float& number1, float& number2)
{
	float temp;

	temp = number1;
	number1 = number2;
	number2 = temp;
}