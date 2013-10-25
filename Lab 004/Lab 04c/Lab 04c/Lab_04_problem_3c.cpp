/*// Brandon Altvater

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int winInput ();
int lossInput ();
float winlossRatio (int, int);


int main ()
{
	cout << fixed << showpoint << setprecision(2);
	int wins;
	int losses;
	
	wins = winInput();
	losses = lossInput();

	cout << "The percentage of wins is " << winlossRatio(wins, losses)  * 100 << "%" <<endl;
	
	return 0;
}

int winInput ()
{
	int win;
	cout << "Please input the number of wins: ";
	cin >> win;

	return win;
}
int lossInput()
{
	int loss;
	cout << "Please input the number of losses: ";
	cin >> loss;

	return loss;
	
}

float winlossRatio(int win, int loss)
{
	int totalGames =  win + loss;
	return ((float) win / totalGames);
}*/