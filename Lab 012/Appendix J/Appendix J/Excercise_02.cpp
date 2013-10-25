/*// Program Count1 prompts for, reads, echo prints, and sums a
// fixed number of integer values.  The sum is printed.

#include <iostream>
using namespace std;


int main ()
{                     
    int  counter;                 // loop-control variable
    int  sum;                     // summing variable          
    int  dataValue;               // input value      
    counter = 1;                                               
    sum = 0;              
                                   
    // Input and sum integer data values. 
    while (counter <= 4)                                  
    {
        cout  << "Enter an integer value.  Press return."  
              << endl;
        cin  >> dataValue;
        sum = sum + dataValue;
        counter++;
    }
    cout  << "Sum is "  << sum  << endl;
    return 0;
}*/