#include<iostream>
using namespace std;
int main()
{
	int price = 0, total = 0;
	cout << "Enter the price(-1 to stop): ";
	cin >> price;
	while (price != -1)
	{
		//total = total + price;
		//OR
		total += price;//accumulative total calculation
		cin >> price;
	}
	cout << "Total: " << total;
	return 0;
}


