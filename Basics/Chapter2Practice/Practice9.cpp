/*The sales manager at Walmart wants a program that allows him to enter the 
sales made in each of two states. Also 15% commission is added to the total sales. 
Write a C++ code to calculate and display the total sales along with the 
commission values.*/
#include<iostream>
using namespace std;
void main()
{
	double sales1 = 0.0, sales2 = 0.0,totalSales=0.0, totalSalesWithComm=0.0;
	const double COMMISSION = 0.15;

	cout << "Enter sales in state1" << endl;
	cin >> sales1;
	cout << "Enter sales in state2" << endl;
	cin >> sales2;

	totalSales = sales1 + sales2;

	totalSalesWithComm = totalSales + (totalSales * COMMISSION);

	cout << "Total Sales With Commision is " << totalSalesWithComm << endl;

	system("pause");
}