//practice 4
#include<iostream>
using namespace std;
int main()
{
	double wholePrice = 0.0, retailPrice = 0.0;
	char anotherItem = 'Y';
	do
	{
		cout << "Enter wholesale price: ";
		cin >> wholePrice;
		retailPrice = wholePrice * 2.5;
		cout << "Retail price of " << wholePrice << " is: " << retailPrice<<endl;
		cout << "Calculate another item(Y/N): ";
		cin >> anotherItem;
	} while (anotherItem == 'Y');
	return 0;
}