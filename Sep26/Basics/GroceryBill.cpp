/*A customer buys biscuits and juice 
from a grocery store. Enter the price 
of one packet of biscuits, number of packets, 
price of one bottle of juice, and number of bottles. 
Calculate and display the total bill.*/
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise the variables
	double biscuitsPrice = 0.0, juicePrice = 0.0, totalBill = 0.0;
	int biscuitsQty = 0, juiceQty = 0;

	//prompt and input 
	cout << "Input the price of biscuits: ";
	cin >> biscuitsPrice;
	cout << "Input the quantity of biscuits: ";
	cin >> biscuitsQty;

	cout << "Input the price of juice: ";
	cin >> juicePrice;
	cout << "Input the quantity of juice: ";
	cin >> juiceQty;

	//calculation
	totalBill = (biscuitsPrice * biscuitsQty) + (juicePrice * juiceQty);

	//output
	cout << "Total Bill: " << totalBill;
	return 0;
    }
