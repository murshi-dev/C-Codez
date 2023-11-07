#include "Account.h"
Account::Account()
{
	id = 0;
	balance = 0.0;
}

void Account::setId(int identity)
{
	id = identity;
}
void Account::setBalance(double bal)
{
	balance = bal;
}
int Account::getID()
{
	return id;
}
double Account::getBalance()
{
	return balance;
}
double Account::withdraw(double amountToWithdraw)
{
	balance = balance - amountToWithdraw;
	return balance;
}
double Account::deposit(double amountToDeposit)
{
	balance = balance + amountToDeposit;
	return balance;
}