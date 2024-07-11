#include "Accounts.h"
#include<iostream>
using namespace std;
Accounts::Accounts()
{
	id = 0;
	balance = 0.0;
}
void Accounts::setId(int identity)
{
	id = identity;
}
void Accounts::setBalance(double bal)
{
	balance = bal;
}
int Accounts::getId()
{
	return id;
}
double Accounts::getBalance()
{
	return balance;
}
double Accounts::withdraw(double amountToWithdraw)
{
	if (amountToWithdraw <= balance)
	{
		balance = balance - amountToWithdraw;
	
	}
	else
	{
		cout << "Insufficient balance"<<endl;
	}
	return balance;
}
double Accounts::deposit(double amountToDeposit)
{
	balance = balance + amountToDeposit;
	return balance;
}