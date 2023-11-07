#include "Account.h"
#include<iostream>
using namespace std;
int main()
{
	//create object
	Account obj;
	//create local variables
	int id = 0;
	double balance = 0.0, withdrawAmount = 0.0, depositAmount = 0.0;
	//prompt and input id and balance
	cout << "Enter the ID: ";
	cin >> id;
	cout << "Enter the initial balance value: ";
	cin >> balance;
	//set values
	obj.setId(id);
	obj.setBalance(balance);
	//display the entered values
	cout << "ID: " << obj.getID() << endl;
	cout << "Initial balance is: " << obj.getBalance() << endl;

	//prompt and input withdrawal amount
	cout << "Enter the withdrawal amount: ";
	cin >> withdrawAmount;
	//display balance amount
	cout << "Current balance is: " << obj.withdraw(withdrawAmount) << endl;

	//prompt and input deposit amount
	cout << "Enter the deposit amount: ";
	cin >> depositAmount;
	//display balance amount
	cout << "Current balance is: " << obj.deposit(depositAmount) << endl;

	return 0;
}