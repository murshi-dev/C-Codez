/*
A florist wants to send coupons to her best customers. Coupons are sent based on the following conditions:
25% discount for customers who placed orders three to five times or spent more than RM 250 last year
50% discount for customers who placed orders more than five times or spent more than RM 500 last year
Write a program that determines the discount structure. Your program must contain 
a function that displays the general information about the discount and its charges, 
a function to determine the discount charge. 
Use appropriate parameters to pass information in and out of a function. 

*/
#include<iostream>
using namespace std;

void displayInfo();
string calculateDiscount(int orders, int amount);
int main()
{
    int orders =0, amount = 0;
	displayInfo();
	cout << "Enter number of orders";
	cin >> orders;
	cout << "Enter purchase amount";
	cin >> amount;
	cout<<calculateDiscount(orders,amount);
	system("pause>0");
}
void displayInfo()
{
	cout << "25% discount- Number Orders is 3 to 5 OR  Amount spent is greater than RM250"<<endl;
	cout << "55% discount- Number Orders is more than 5 OR  Amount spent is greater than RM500"<<endl;
}
string calculateDiscount(int o, int a)
{
    if ((o >= 6) || (a >= 500)) 
	{
		return "Eligible for 50% discount";
	}
	else if ((o >= 3 && o<=5)||(a>=250 && a<=499)) 
	{
		 return "Eligible for 25% discount";
	}
	else
	{
	    return "No Discount";
	}
	return 0;
	}