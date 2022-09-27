/*Sarah receives RM 250 as her weekly pay. 
She is expecting a raise rate of 5% next week.
Write a C++ code to display the expected weekly pay for next week.*/
#include<iostream>
using namespace std;
void main()
{
	const double WEEKLYPAY = 250;
	const double RAISERATE = 0.05;
	double newPay = 0.0;

	newPay = WEEKLYPAY + (WEEKLYPAY * RAISERATE);
	cout << "New Weekly Pay is " << newPay << endl;

	//modify the code to accept weekly pay from user

	double weekpay = 0.0;
	cout << "Enter the weekly pay" << endl;
	cin >> weekpay;
	newPay = weekpay + (weekpay * RAISERATE);
	cout << "New Weekly Pay based on user input is " << newPay << endl;


	system("pause");
}