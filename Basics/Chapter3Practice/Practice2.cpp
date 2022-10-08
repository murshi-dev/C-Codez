//Factory Outlet Store is having a sale.All items are on sale with 
//30 % discount to the original price.The store manager wants a 
//program that allows a sales clerk to enter the original price of an item
//and calculate the price after discount.
//Also, a fixed sales tax of 6 % is charged to the total bill.
//Write a program to display the total bill assuming the user purchases three items.
//Based on the total bill amount display the following message :
/*Total bill amount Message to display
Rm 250 and greater Congrats!You receive RM 20 cash voucher
Between RM 150 to RM 249 Congrats!You receive RM 10 cash voucher
Less than RM 150 Thank you for shopping with us!*/

#include<iostream>
using namespace std;
int main()
{
	double item1 = 0.0, item2 = 0.0, item3 = 0.0, itemTotal=0.0, amount = 0.0;
	const double SALESTAX = 0.06;
	const double DISCOUNT = 0.3;

	cout << "Enter the prices of three items:" << endl;
	cin >> item1 >> item2 >> item3;
	itemTotal = item1 + item2 + item3;
	amount = itemTotal - (itemTotal * DISCOUNT) + (itemTotal * SALESTAX);
	cout << "Total Amount: " << amount<<endl;
	if (amount >= 250)
	{
		cout << "Congrats!You receive RM 20 cash voucher" << endl;
	}
	else if (amount >= 150 && amount <= 249)//use AND (&&) operator to check multiple conditions
	{
		cout << "Congrats!You receive RM 10 cash voucher" << endl;
	}
	else
	{
		cout << "Thank you for shopping with us!" << endl;
	}
	return 0;
}