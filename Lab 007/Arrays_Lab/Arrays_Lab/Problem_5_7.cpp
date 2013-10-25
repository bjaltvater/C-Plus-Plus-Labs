/*#include <iostream>

using namespace std;

const int MAXCOUNT = 50;
typedef char Grade[MAXCOUNT];

int gradeCounter(Grade, int, char);


int main ()
{
	int numOfGrades;

	cout << "Please input the number of grades to be read in. (1-50)" << endl;
	cin >> numOfGrades;

	Grade gradeArray;

	cout << "All grades must be upper case A B C D or F" << endl;

	for (int i = 0; i < numOfGrades; i++)
	{
		cout << "Input a grade" << endl;
		cin >> gradeArray[i];
	}

	cout << "Number of A=" << gradeCounter(gradeArray, numOfGrades, 'A') << endl;
	cout << "Number of B=" << gradeCounter(gradeArray, numOfGrades, 'B') << endl;
	cout << "Number of C=" << gradeCounter(gradeArray, numOfGrades, 'C') << endl;
	cout << "Number of D=" << gradeCounter(gradeArray, numOfGrades, 'D') << endl;
	cout << "Number of F=" << gradeCounter(gradeArray, numOfGrades, 'F') << endl;
	
	return 0;
}
int gradeCounter(Grade array, int arraySize, char letter)
{
	int count = 0;

	for (int i = 0; i < arraySize; i++)
	{
		if (array[i] == letter)
		{
			count++;
		}
	}
	return count;
}*/
