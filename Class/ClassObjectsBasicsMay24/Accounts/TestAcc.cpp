#include "Accounts.h"
#include<iostream>
using namespace std;
int main()
{
	int id = 0;
	double balance = 0.0, wA=0.0, dA=0.0;

	cout << "Enter the ID: ";
	cin >> id;
	cout << "Enter the initial balace value: ";
	cin >> balance;

	Accounts acc1;
	acc1.setId(id);
	acc1.setBalance(balance);

	cout << "ID: " << acc1.getId() << endl;
	cout << "Initial Balance: " << acc1.getBalance() << endl;

	cout << "Enter the withdrawal amount: ";
	cin >> wA;
	cout<<"Current balance: "<<acc1.withdraw(wA)<<endl;

	cout << "Enter the deposit amount: ";
	cin >> dA;
	cout << "Current balance: " << acc1.deposit(dA)<<endl;

	return 0;
}