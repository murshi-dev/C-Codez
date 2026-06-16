/*Calculate the amount to be paid after
sales tax due on a purchase. Sales tax is 6%.*/
#include<iostream>
using namespace std;
int main()
{
	//declare constant
	const double SALES_TAX = 0.06;
	//declare variables
	double purchaseAmount = 0.0, amountToPay = 0.0;

	cout << "Input the purchase amount: ";
	cin >> purchaseAmount;

	amountToPay = purchaseAmount + (purchaseAmount * SALES_TAX);

	cout << "Amount To Pay: " << amountToPay;
	return 0;
}