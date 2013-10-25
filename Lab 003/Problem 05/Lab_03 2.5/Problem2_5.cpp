// Brandon Altvater

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	const float gravity = 9.8;
	int fallTime;
	int fallHeight;
	float distance;
		
	cout << fixed << setprecision (1);
	
	cout << "Please input the time of fall in seconds:" << endl;
	cin >> fallTime;

	cout << "Please input the height of the bridge in meters:" << endl;
	cin >> fallHeight;
	
	cout << "Time Falling (seconds) Distance Fallen (meters)" << endl;
	cout << "***********************************************" << endl;
	cout << "0" << setw(30) << right << "0" << endl;

	for (int i = 1 ; i <= fallTime; i++)
	{
		distance = .5 * gravity * pow((float)i,2);
		cout << i << setw(30) << right << distance << endl;
	}

	if (distance > fallHeight)
	{
		cout << "Warining-Bad Data: The distance fallen exceeds the height of the bridge" << endl;
	}

	return 0;
}
