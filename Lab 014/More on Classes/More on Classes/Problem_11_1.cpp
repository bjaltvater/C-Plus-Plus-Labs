/*// This program introduces the use of static member variables.
// PLACE YOUR NAME HERE.

#include <iostream>
using namespace std;

class SavingsAcct 
{ 
    private:
       int acctNum;                        // "regular" member variables
       double balance;
	   static int nextAcctNumber;
	   static double totalDeposits;
	   void newAcctInfo();
	   

   public:
      SavingsAcct();                       // default constructor
      SavingsAcct(double);                 // constructor
      double getTotalDeposits();
      void displayAcctInfo();
      void deposit(double);
      void withdraw(double);
	  static void firstAcctNumber(int);
	  
};

// Static Variable Definitions 

int SavingsAcct :: nextAcctNumber = 5000;
double SavingsAcct :: totalDeposits = 0;


void SavingsAcct :: firstAcctNumber(int startNum)
{
	nextAcctNumber = startNum;
}
// Member Function Implementation Section

SavingsAcct::SavingsAcct()                 // default constructor
{ 
	acctNum = nextAcctNumber++;
    balance = 0;
    newAcctInfo();
}

SavingsAcct::SavingsAcct(double startBal)  // constructor
{   
	acctNum = nextAcctNumber++;
    balance = startBal;
    totalDeposits += startBal;
    newAcctInfo(); 
}

void SavingsAcct::newAcctInfo()
{   cout << "New account number: " << acctNum << "   Initial Balance: $"
         << balance << endl;
}

double SavingsAcct::getTotalDeposits()
{   return totalDeposits;
}

void SavingsAcct::displayAcctInfo()
{  
   cout << "Account number " << acctNum << " has a balance of $" << balance << endl;
	
}

void SavingsAcct::deposit(double amt)
{   
	balance += amt;
	totalDeposits += amt;
   
}

void SavingsAcct::withdraw(double amt)
{   
	
	// This function is not being implemented at this time.
}

// Client code

int main()
{  
	int number;
	cout << "Please input the starting account number" << endl;
	cin >> number;
	SavingsAcct :: firstAcctNumber(number);


	SavingsAcct acct1(100);
	SavingsAcct acct2(250);
   
	acct2.deposit(50);

	acct1.displayAcctInfo();
	acct2.displayAcctInfo();
   
	cout << "Total savings deposits = $" << acct1.getTotalDeposits() << endl;
 
   return 0;
}*/