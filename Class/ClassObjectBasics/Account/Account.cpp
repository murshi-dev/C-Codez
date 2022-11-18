//Account.cpp
#include "Account.h"

Account::Account()
{
	id=0;
	balance=0.0;
	annualInterestRate=0.0;
}

	//getter/accessor methods
	int Account::getId()
	{
		return id;
	}
	double Account::getBalance()
	{
		return balance;
	}
	double Account::getAnnualInterestRate()
	{
		return annualInterestRate;
	}
	//setter/mutator methods
	void Account::setId(int aid)
	{
		id=aid;
	}
	void Account::setBalance(double b)
	{
		balance=b;
	}
	void Account::setAnnualInterestRate(double aIR)
	{
		annualInterestRate=aIR;
	}

	//other functions required for calculations
	double Account::getMonthlyInterestRate()
	{
		return annualInterestRate/12;
	}
	double Account::getMonthlyInterest()
	{
		return balance*(getMonthlyInterestRate()/100);
	}
	void Account::withdraw(double amount)
	{
		balance=balance-amount;
	}
	void Account::deposit(double amount)
	{
		balance=balance+amount;
	}