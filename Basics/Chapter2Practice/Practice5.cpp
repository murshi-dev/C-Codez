//Write a C++ code display the amount to be paid after sales tax due on a purchase.Sales tax is 6 % .
#include<iostream>
using namespace std;
int main()
{
	double price = 0.0, toPay = 0.0;
	//since the sales tax value is fixed as 6% it can declared as a Constant
	//constant-value does not change
	const double tax = 0.06;
	cout << "Enter the price of the item: ";
	cin >> price;
	toPay = price + (price * tax);
	cout << "Total Due: " << toPay;
	return 0;
}