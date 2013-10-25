// Program Arrays manipulates values in an array.
// Based on Arrays.cpp used in (Lab 12?)
// Modified 3.13.01  by M. Morrison

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

// Function to display array elements.
void PrintArray(int arr[], int size);


int main ()
{
    const int MAX_ARRAY = 5;      // max values in numbers
          int numbers[MAX_ARRAY]; // array being manipulated
          int index;              // LCV
        
    
    fstream inFile;               // Input data file

    // Attempt to open the input file.  
    // Quit if unsuccessful.
    inFile.open("Arrays.dat");
    if (!inFile)
        return 1;


    // Read values into the array from input file.
    // File is "guaranteed" to contain the correct
    // number of values.
    for (index = 0; index < MAX_ARRAY; index++)
        inFile >> numbers[index];                        

    // Convert all array values to absolute value:
    for (index = 0; index < MAX_ARRAY; index++)
        numbers[index] = abs(numbers[index]);
	
	PrintArray(numbers, MAX_ARRAY);
	cout << endl;


    return 0;

} //end main()
                   
                             
//...................  PrintArray()  ..................
// Description:  Prints the elements of the input array
//    to the screen.
// Inputs: arr[] - the array to be printed.
//         size - number of elements in arr[] 
// Outputs: None.
// Preconditions: Elements of arr[] are assigned.
// Postconditions: Elements of arr[] are displayed to the
//                 screen.
//
void PrintArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
        cout << arr[i] << ' '; 
}