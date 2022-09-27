//Write a C++ code to display the amount to be paid after 
//sales tax due on a purchase.Sales tax is 6 %

#include<iostream>
using namespace std;
void main()
{
	//declare required variables 
	double price = 0.0, amountToPay = 0.0;
	//since tax is a fixed value, declare it as a constant
	const double SALES_TAX = 0.06;
	//prompt user input
	cout << "Enter the price of an item" << endl;
	//accept user input
	cin >> price;
	//calculate
	amountToPay = price + (price * SALES_TAX);
	//display result
	cout << "Amount to pay for " << price << " is " << amountToPay << endl;

	system("pause");
}
