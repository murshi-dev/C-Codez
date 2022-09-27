/*The manager of the Lakeview Hotel wants a program that calculates 
and displays a guest’s total bill. Each guest pays a room charge that 
is based on a per-night rate. For example, if the per-night rate 
is RM100 and the guest stays two nights, the room charge is RM200. 
Customers also may have to pay a one-time room service charge 
and a one-time telephone charge. Write a C++ code to calculate and 
display a guest’s total bill.
*/
#include<iostream>
using namespace std;
void main()
{
	int numberOfNights = 0, amountToPay = 0;
	const int ROOMCHARGE = 250;
	const int SERVICECHARGE = 100;
	const int TELCHARGE = 50;

	cout << "Enter the number of nights stay" << endl;
	cin >> numberOfNights;

	amountToPay = (numberOfNights * ROOMCHARGE) + SERVICECHARGE + TELCHARGE;

	cout << "Amount Payable is " << amountToPay;


	system("pause");
}