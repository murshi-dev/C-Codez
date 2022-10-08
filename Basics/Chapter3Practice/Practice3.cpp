/*3.Mekio appliances needs a program to calculate the number of dishwashers in stock at the end of each month. 
The program must allow the store clerks to enter the number of dishwashers in stock at the beginning of the month, 
the number purchased during the month and the number sold during the month. 
Create a C++ program to display the total dishwashers in stock at the end of the month. 
Based on the total dishwashers in stock at the end of the month display the following message:

Total Dishwashers in Stock at the End of the Month	Message to display
5 and greater	Adequate Stock in Hand
Between 3 to 4	Alert Supplier
Less than 3	Place Order immediately!*/


#include <iostream>
using namespace std;
int main()
{
	int dishWashStartOfMonth=0,  dishWashPurchased=0, dishWashSold=0, dishWashEndOfMonth=0;

	cout << "Enter the the number of dishwashers in stock at the beginning of the month:" << endl;
	cin >> dishWashStartOfMonth;
	cout << "Enter the the number of dishwashers purchased during the month:" << endl;
	cin >> dishWashPurchased;
	cout << "Enter the the number of dishwashers sold during the month:" << endl;
	cin >> dishWashSold;
	dishWashEndOfMonth= dishWashStartOfMonth-dishWashSold+dishWashPurchased;

	cout << "Total dish wash in stock is: " << 	dishWashEndOfMonth<<endl;
	if (dishWashEndOfMonth < 3)
	{
		cout << "Place Order immediately!" << endl;
	}
	else if (dishWashEndOfMonth ==3 || dishWashEndOfMonth==4)
	{
		cout << "Alert Supplier!" << endl;
	}
	else
	{
		cout << "Adequate Stock in Hand" << endl;
	}
	return 0;
}