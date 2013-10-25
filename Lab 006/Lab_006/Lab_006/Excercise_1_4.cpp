/*#include <iostream>
#include <iomanip>
using namespace std;

// This program will input American money and convert it to foreign currency

// Brandon Altvater

// Prototypes of the functions
void  convertMulti(float dollars, float& euros, float& pesos);
void  convertMulti(float dollars, float& euros, float& pesos, float& yen);
float convertToYen(float dollars);
float convertToEuros(float dollars);
float convertToPesos(float dollars);

// Global Constants
const float EUROS = .701;
const float PESOS = 12.66;
const float YEN = 91.25;

int main ()
{
	float dollars;
	float euros;
	float pesos;
	float yen;
	
	cout << fixed << showpoint << setprecision(2);

	cout << "Please input the amount of American Dollars you want converted " 
		 << endl;
	cout << "to euros and pesos" << endl;
	cin >> dollars;
	
	convertMulti(dollars,euros, pesos); 
	cout << "$"<< dollars << " is converted to " << euros << " and " << pesos << " pesos.\n" << endl;
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to euros, pesos and yen" << endl;
	cin >> dollars;
	
	convertMulti(dollars,euros, pesos, yen); 
	cout << "$"<< dollars << " is converted to " << euros << " and " << pesos << " pesos and " << yen << " yen.\n" << endl;
	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << "to yen" <<endl;
	cin >> dollars;
	
	cout << "$"<< dollars << " is converted to " << convertToYen(dollars) << " yen.\n" << endl;	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to euros" << endl;
	cin  >> dollars;
	
	cout << "$"<< dollars << " is converted to " << convertToEuros(dollars) << " euros.\n" << endl;	
	
	cout << "Please input the amount of American Dollars you want converted\n";
	cout << " to pesos " << endl;
	cin >> dollars;
	
	cout << "$"<< dollars << " is converted to " << convertToPesos(dollars) << " pesos.\n" << endl;
	
	
	
	return 0;
}
//  ************************************************************************
//                           convertMult
//                           
//   task:     This function takes a dollar value and converts it to euros
//             and pesos
//   data in:  dollars
//   data out: euros and pesos
//
//   ***********************************************************************

void  convertMulti(float dollars, float& euros, float& pesos)

{     
	euros = dollars * EUROS;
	pesos = dollars * PESOS;
}

//  ************************************************************************
//                           convertMult
//                           
//   task:     This function takes a dollar value and converts it to euros
//             pesos and yen
//   data in:  dollars
//   data out: euros pesos yen
//
//   ***********************************************************************

void  convertMulti(float dollars, float& euros, float& pesos, float& yen)

{
	euros = dollars * EUROS;
	pesos = dollars * PESOS;
	yen = dollars * YEN;	
}


//  ****************************************************************************
//                           convertToYen
//                           
//   task:          This function takes a dollar value and converts it to yen
//   data in:       dollars
//   data returned: yen
//
//   ***************************************************************************

float convertToYen(float dollars)

{
	return dollars * YEN;
}

//  ****************************************************************************
//                           convertToEuros
//                           
//   task:          This function takes a dollar value and converts it to euros
//   data in:       dollars
//   data returned: euros 
//
//   ***************************************************************************
		

float convertToEuros(float dollars)
{
	return dollars * EUROS;
}

//  *****************************************************************************
//                           convertToPesos
//                           
//   task:          This function takes a dollar value and converts it to pesos       
//   data in:       dollars
//   data returned: pesos
//
//   ****************************************************************************
float convertToPesos(float dollars)

{
    return dollars * PESOS;
}*/
