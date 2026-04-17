#include<iostream>
#include<fstream>
using namespace std;
struct checkingAccount
{
	string custName;
	int accNum;
	double balAmount;
	double transAmount[5];
};

//FUNCTION DEFINITION to input data 
void inputAccountInfo(checkingAccount &acc)
{
	cout << "Enter customer name: ";
	cin >> acc.custName;
	cout << "Enter account number: ";
	cin >> acc.accNum;
	cout << "Enter balance amount: ";
	cin >> acc.balAmount;
	for (int transcounter = 0; transcounter < 5; transcounter++)
	{
		cout << "Enter transaction " << transcounter + 1 << "amount: ";
		cin >> acc.transAmount[transcounter];
	}
}

//FUNCTION DEFINITION to output data
void outputAccountInfo(checkingAccount acc)
{
	cout << "\nACCOUNT DETAILS:\n";
	cout << "Customer Name: " << acc.custName << endl;
	cout << "Account Number: " << acc.accNum << endl;
	cout << "Balance Amount: " << acc.balAmount << endl;
	for (int transcounter = 0; transcounter < 5; transcounter++)
	{
		cout << "Transaction " << transcounter + 1 << "amount: ";
		cout << acc.transAmount[transcounter];
	}
	cout << endl;
}


//FUNCTION DEFINITION to STORE DATA INTO A TEXT FILE
void writeToFile(ofstream& outFile, checkingAccount acc)
{
	outFile << "Customer Name: " << acc.custName << endl;
	outFile << "Account Number: " << acc.accNum << endl;
	outFile << "Balance Amount: " << acc.balAmount << endl;
	for (int transcounter = 0; transcounter < 5; transcounter++)
	{
		outFile << "Transaction " << transcounter + 1 << "amount: ";
		outFile << acc.transAmount[transcounter];
	}
	outFile << endl;
}

int main()
{
	checkingAccount account[3];//assume 3 customers

	//create the file
	ofstream outFile("accounts.txt",ios::app);//open file in append mode

	//function call to input
	for (int cuscounter = 0; cuscounter < 3; cuscounter++)
	{
		inputAccountInfo(account[cuscounter]);//function calling
	}
	//function call to output
	for (int cuscounter = 0; cuscounter < 3; cuscounter++)
	{
		outputAccountInfo(account[cuscounter]);//function calling to display data in console
		writeToFile(outFile, account[cuscounter]);//function calling to write data to file
	}
	outFile.close();
	cout << "Data written to text file" << endl;
	return 0;
}