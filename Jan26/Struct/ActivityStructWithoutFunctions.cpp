#include<iostream>
using namespace std;
struct checkingAccount
{
	string custName;
	int accNum;
	double balAmount;
	double transAmount[5];
};
int main()
{
	//create reference to checkingAccount
	checkingAccount acc[3]; //assume 3 customers data
	
	//prompt and input values to the attributes of checkingAccount
	for (int acccounter = 0; acccounter < 3; acccounter++)
	{
		cout << "Enter customer name: ";
		cin >> acc[acccounter].custName;

		cout << "Enter account number: ";
		cin >> acc[acccounter].accNum;

		cout << "Enter balance amount: ";
		cin >> acc[acccounter].balAmount;

		for (int tracounter = 0; tracounter < 5; tracounter++)
		{
			cout << "Enter transcation amount" << tracounter+1 << ": ";
			cin >> acc[acccounter].transAmount[tracounter];//ATTENTION
		}
	}

	//output the values of checkingAccount attributes
	for (int acccounter = 0; acccounter < 3; acccounter++)
	{
		cout << "Customer Name: " << acc[acccounter].custName << endl;
		cout << "Account Number: " << acc[acccounter].accNum << endl;
		cout << "Balance Amount: " << acc[acccounter].balAmount << endl;
		for (int tracounter = 0; tracounter < 5; tracounter++)
		{
			cout << "Transaction " << tracounter + 1 << "amount: ";
			cout << acc[acccounter].transAmount[tracounter];//ATTENTION
		}
	}
	return 0;
}