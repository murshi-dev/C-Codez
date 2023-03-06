#include<iostream>
using namespace std;
int orders;
int amount;
void displayInfo();
void calculateDiscount(int orders, int amount);
int main()
{
	displayInfo();
	cout << "Enter number of orders";
	cin >> orders;
	cout << "Enter purchase amount";
	cin >> amount;
	calculateDiscount(orders,amount);
	system("pause>0");
}
void displayInfo()
{
	cout << "25% discount- Number Orders is 3 to 5 OR  Amount spent is greater than RM250"<<endl;
	cout << "55% discount- Number Orders is more than 5 OR  Amount spent is greater than RM500"<<endl;
}
void calculateDiscount(int o, int a)
{
	if ((o >= 3 && o<=5)||(a>=250 && a<=499)) {
		 cout<<"Eligible for 25% discount";
		}
	else if ((o >= 6) || (a >= 500)) 
		{
		cout<< "Eligible for 50% discount";
	}
	}
