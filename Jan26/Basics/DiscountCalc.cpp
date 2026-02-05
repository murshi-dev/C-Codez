/*Calculate the amount to be paid for an apparel 
with a discount of 20% to its original price.*/
#include<iostream>
using namespace std;
int main()
{
	//declare a constant
	const double DISCOUNT = 0.2;
	double price = 0.0, toPay = 0.0;
	cout << "Enter the price of the item: ";
	cin >> price;
	toPay = price - (price * DISCOUNT);
	cout << "Pay: " << toPay;
	return 0;
}