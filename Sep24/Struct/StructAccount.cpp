#include <iostream>
#include <string>
using namespace std;

// Define the struct
struct checkingAccount {
    string accountHolderName;
    int accountNumber;
    double balance;
    double interestRate;
};

int main() {
      	checkingAccount account;
      	account.accountHoldername="Jason Miller";
	account.accountNumber=17328910;
      	account.balance=24476.38;
      	account.interestRate=2.5;
    
    	cout << "Checking Account Details:\n";
    	cout << "Account Holder's Name: " << account.accountHolderName << endl;
    	cout << "Account Number: " << account.accountNumber << endl;
    	cout << "Balance: RM " << account.balance << endl;
   	cout << "Interest Rate: " << account.interestRate << "%" << endl;
    return 0;
}
