// Brandon Altvater

#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	char studentName[20] = "Brandon Altvater";
	long idNumber = 1104719;
	char studentAddress[150] = "1017 Heron Court, Salisbury, MD 21804";
	
	ofstream outFile;
	ifstream inFile;

	outFile.open("student.dat");
		
	outFile << studentName << endl << idNumber << endl << studentAddress << endl;

	outFile.close();

	inFile.open("student.dat");
	
	inFile.getline(studentName,20);
	inFile >> idNumber;
	inFile.ignore(1,'\n');
	inFile.getline(studentAddress,150);

	cout << studentName << endl;
	cout << idNumber << endl;
	cout << studentAddress << endl;


	inFile.close();
	
	return 0;

}