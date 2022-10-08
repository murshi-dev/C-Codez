/*5.	Write a program to display the item name and its price based on the item code entered.
The item code and item price are listed below:
Item Code	Item Name and Price
B	Burger RM 8
F	Fries RM 3
N	Nuggets RM 6
W	Wrap RM 5
J	Juice RM 2
Display a message ‘invalid input’ if the user key in alphabet which is not listed in the table.
*/
#include <iostream>
using namespace std;
int main()
{
	char option;

	cout << "Enter the code to display the price:" << endl;
	cin >> option;
switch(option){
    case 'B':
    cout<<"Burger is RM 8";
    break;
    case 'F':
    cout<<"Fries RM 3";
    break;
    case 'N':
    cout<<"Nuggets RM 6";
    break;
    case 'W':
    cout<<"Wrap RM 5";
    break;
    case 'J':
    cout<<"Juice RM 2";
    break;
     default:
    cout<<"Enter B F N W J only";
    break;
}
	return 0;
}