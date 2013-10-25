// Brandon Altvater

/*
#include <iostream>
#include <fstream>

using namespace std;

int main ()
{
	char studentName[20];
	long idNumber;
	char studentAddress[150];
	
	ofstream outFile;
	ifstream inFile;

	outFile.open("student.dat");

	cout << "Please enter your name:" << endl;
	cin.get(studentName,20);

	long nameLength = strlen(studentName);

	cout << "Please enter your student ID number: " << endl;
	cin >> idNumber;

	cout << "Please enter your address: "<< endl;
	cin.ignore(1,'\n');
	cin.get(studentAddress,150);

	long addressLength = strlen(studentAddress);
	
	outFile << studentName << endl << idNumber << endl << studentAddress << endl;

	outFile.close();

	inFile.open("student.dat");
	
	inFile.get(studentName,nameLength +1);
	inFile >> idNumber;
	inFile.ignore(1,'\n');
	inFile.get(studentAddress,addressLength +1);

	cout << '\n' << studentName << endl;
	cout << idNumber << endl;
	cout << studentAddress << endl;


	inFile.close();
	
	return 0;

}*/