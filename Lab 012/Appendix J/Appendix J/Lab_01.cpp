/*// Program Shell3 reads miles and hours and prints miles
// per hour.

#include <iostream>
#include <iomanip>
using namespace std;

void GetData(float&, float&);

int main ()
{
    float  miles;
    float  hours;
    float  milesPerHour;

    cout  << fixed  << showpoint;

   GetData(miles,hours);

    milesPerHour = miles / hours;
    cout  << setw(10)  << miles
          << setw(10)  << hours
          << setw(10)  << milesPerHour  << endl;
    return 0;
}

//*****************************************************

void GetData(float& first, float& second)
{
  // Pre:  None
  // Post:  first and second will have values read in from keyboard

	cout << "Please input miles then hours then press return"  << endl;
	cin >> first >> second;
}

*/