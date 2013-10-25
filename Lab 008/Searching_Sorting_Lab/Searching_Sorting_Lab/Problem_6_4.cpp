#include <iostream>
#include <iomanip>

using namespace std;

const int MAXSIZE = 50;

int values[MAXSIZE];
int original[MAXSIZE];

// function prototypes
void enterValues(int[], int[], int);
void bubbleSortArray(int[], int);
int binarySearch(int [], int, int);
float findMean(int [], int);
void displayArray(int[], int);



int main()
{
	int size, number, found;
		
	cout << "Please enter the number of elements to a max size of 50" << endl;
	cin >> size;

	enterValues(values, original, size);
	bubbleSortArray(values, size);

	cout << "Please a number to search in your array"  << endl;
	cin >> number;
	
	cout << "You entered a size of " << size << " and the original data for this array was " << endl;
	displayArray(original,size);

	cout << endl;

	cout << "After sorted it looks like this" << endl;
	displayArray(values, size);

	cout << endl;

	found = binarySearch(values, size, number); 

	if (found == -1)
		cout << "The value " << number << " is not in the list" << endl;
	else
	{
		cout << "The value " << number << " is in position number "
		     << found + 1 << " of the list" << endl; 
	}
	
	cout << fixed << showpoint << setprecision(2);
	cout << "The mean value for your array is " << findMean(values, size) << endl;
	
	return 0;

}
void enterValues(int value[], int original[], int size)
{
	for (int i = 0; i < size; i++)
	{
	cout << "Please enter a number to put in the array" << endl;
	cin >> value[i];
	
	original[i] = value[i];
	}


}
void bubbleSortArray(int array[], int elems)
{
	bool swap;
	int temp;
	int bottom = elems - 1;     // bottom indicates the end part of the 
	                            // array where the largest values have
	                            // settled in order
do
	{
		swap = false;
		for (int count = 0; count < bottom; count++)
		{
			if (array[count] < array[count+1])
			{	          // the next three lines do a swap   
			   temp = array[count];  
			   array[count] = array[count+1];
			   array[count+1] = temp;
			   swap = true; // indicates that a swap occurred
			}
		}
            bottom--;     // bottom is decremented by 1 since each pass through
	                    // the array adds one more value that is set in order
						
	            
	} while(swap != false);
              // loop repeats until a pass through the array with
	        // no swaps occurs
}
int binarySearch(int array[],int numElems,int value) //function heading
{
	int first = 0;				    // First element of list
	int last = numElems - 1;	    // last element of the list
	int middle;					   // variable containing the current 
	                                // middle value of the list
	
	while (first <= last)
	{
		middle = first + (last - first) / 2; 
		   
	if (array[middle] == value)
		return middle;		       // if value is in the middle, we are done
	                                 
	else if (array[middle]<value)
		last = middle - 1;		   // toss out the second remaining half of
								   // the array and search the first 
	else
		first = middle + 1;		   // toss out the first remaining half of
								   // the array and search the second
	}
	
	return -1;					   // indicates that value is not in the array
}
float findMean(int array[], int size)
{
	float sum = 0;
	for(int i = 0; i < size; i++)
	{
		sum = sum + array[i];

	}
	return sum / size;
}
void displayArray(int array[], int elems)    // function heading
{							   // displays the array	
	for (int count = 0; count < elems; count++)
		cout << array[count] << "  ";
}