/*4.	Write a program to display the multiplication table for an entered number.*/
#include<iostream>
using namespace std;
int main()
{
	int userinput = 0;
	cout << "Enter the number to generate multiplication table: ";
	cin >> userinput;

	//display the table using for loop
	for (int counter = 1; counter <= 10; counter++)
	{
		cout << counter << " * " << userinput << " = " << counter * userinput << endl;
	}
	return 0;
}