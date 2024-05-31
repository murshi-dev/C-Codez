/*Calculate the amount to be paid after sales tax 
due on a purchase. Sales tax is 6%.*/
#include<iostream>
using namespace std;
int main()
{
	//declare a constant
	const double SALES_TAX = 0.06;
	double price = 0.0, toPay = 0.0;
	cout << "Enter the price of the item: ";
	cin >> price;
	toPay = price + (price * SALES_TAX);
	cout << "Pay: " << toPay;
	return 0;
}