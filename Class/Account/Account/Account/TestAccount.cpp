#include "Account.h"
#include <iostream>
using namespace std;
void main()
{
	Account obj;
	obj.setId(007);
	obj.setBalance(20000);
	obj.setAnnualInterestRate(4.5);

	obj.withdraw(2500);
	obj.deposit(3000);

	cout<<"ID: "<<obj.getId()<<endl;
	cout<<"Balance: "<<obj.getBalance()<<endl;
	cout<<"Annual Interest rate: "<<obj.getAnnualInterestRate()<<endl;
	cout<<"Monthly Interest rate: "<<obj.getMonthlyInterestRate()<<endl;
	cout<<"Monthly Interest: "<<obj.getMonthlyInterest()<<endl;
	
	system("pause");
}