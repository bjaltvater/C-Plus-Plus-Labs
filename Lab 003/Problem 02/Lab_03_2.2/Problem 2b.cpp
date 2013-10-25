//  This program has the user input a number n and then finds the
//  mean of the first n positive integers

// Brandon Altvater

#include <iostream>
using namespace std;


int main()
{
	int value;       // value is some positive number n
	int valueTwo;	// value is positive number m
 	int total = 0;   // total holds the sum of the first n positive numbers
   	int number;      // the amount of numbers
  	float mean;      // the average of the first n positive numbers

  	cout << "Please enter a positive starting integer" << endl;
   	cin >> value;

	cout << "Please enter a positive ending integer" << endl;
   	cin >> valueTwo;

  	if (value > 0)
  	{
      	for (number = value; number <= valueTwo; number++)
        {
 	  	    total = total + number;
		}  // curly braces are optional since there is only one statement 
		
        mean = float(total) / (valueTwo - value + 1);         // note the use of the typecast 
															// operator here
		cout << "The mean average from " << value << " to " << valueTwo << " is " << mean << endl;
    }
    else 
        cout << "Invalid input - integer must be positive" << endl;

   return 0;	
}