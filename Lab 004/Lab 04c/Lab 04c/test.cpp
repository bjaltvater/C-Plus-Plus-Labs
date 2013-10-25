#include <iostream>
#include <string>

using namespace std;

int f(int );

int main ()
{
	/*for (int i = 0; i < 7; i++)
	{
		
		cout << "i is " << i << "f(i) is " << f(i) << endl;
	}*/
	cout << f(15) << endl;
	cout << f(8) << endl;
	cout << f(3) << endl;


	return 0;
}

int f(int n)
{
	if (n < 1)
		{
		return 0;
	}
	else
		return f(n/2) +1;
}