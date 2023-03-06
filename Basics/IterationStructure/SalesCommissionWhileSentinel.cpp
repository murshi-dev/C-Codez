//Calculate the commission based on the sales and commission rate. 
//Repeat the program until users chooses to exit.
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variables
	double sales = 0.0, com_rate = 0.0, commission = 0.0;
	//declare a variable to decide the if the program continues or exits
	char keepGoing = 'Y';//1.initialise
	while (keepGoing == 'Y')//2.check condition
	{
		//write the commission calculation here
		cout << "Enter the sales: ";
		cin >> sales;
		cout << "Enter the com_rate: ";
		cin >> com_rate;
		commission = sales * com_rate;
		cout << "Commission is: " << commission << endl;
		//3.increment
		cout << "Continue(Y/N)?: ";
		cin >> keepGoing;
	}
	return 0;
}
