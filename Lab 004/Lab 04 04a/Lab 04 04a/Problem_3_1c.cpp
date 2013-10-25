/*// This program will allow the user to input from the keyboard
// whether the last word to the following proverb should be party or country:
// "Now is the time for all good men to come to the aid of their _______"
// Inputting a string will result in that string.

// Brandon Altvater

#include <iostream>
#include <string>
using namespace std;

void writeProverb (string);

int main ()
{
	
	string wordCode;

	cout << "Given the phrase:" << endl;
	cout << "Now is the time for all good men to come to the aid of their ___" << endl;
	cout << "Please input the word you would like to have finish the proverb" << endl;
	cin  >> wordCode;
	cout << endl;
    writeProverb(wordCode);

	return 0;
}

//  ******************************************************************************
//                            writeProverb
//   
//   task:      This function prints a proverb. The function takes a number
//              from the call. If that number is a 1 it prints "Now is the time 
//              for all good men to come to the aid of their party."
//              Otherwise, it prints "Now is the time for all good men
//              to come to the aid of their country"
//   data in:   code for ending word of proverb (string)
//   data out:  none
//
//   *****************************************************************************

void writeProverb (string word)
{
   cout << "Now is the time for all good men to come to the aid of their " << word << endl;
   	
}*/