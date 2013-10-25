#include <iostream>

using namespace std;

// Function Prototype
void bubbleSort(int [], int);

int main ()
{
	int *intArray;
	int numOfScores;
	int average;
	int count;
	int total = 0;

	cout << "Please input the number of scores" << endl;
	cin >> numOfScores;

	intArray = new int[numOfScores];

	for (int count = 0; count < numOfScores; count++)
	{
		cout << "Please enter a score" << endl;
		cin >> *(intArray + count);

	}
	
	for ( count = 0; count < numOfScores; count++)
	{
		total = total + intArray[count];
	}
	
	average = total / numOfScores;

	cout << "The average of the scores is " << average << endl;

	bubbleSort(intArray, numOfScores);

	cout << "Here are the scores in ascending order" << endl;
	
	for (int count = 0; count < numOfScores; count++)
	{
		cout << *(intArray + count) << endl;
	}

	delete [] intArray;
	
	return 0;
}
void bubbleSort(int array[], int size)
{
	bool swap;
	int temp;
	int bottom = size - 1;

	do
	{
		swap = false;
		for (int i = 0; i < bottom; i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i+1];
				array[i+1]=temp;
				swap = true;
			}
		}
		bottom--;
	}while (swap != false);
}