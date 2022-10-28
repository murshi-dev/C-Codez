/*Write a program in C++ to display the cube of the number up to given an integer.*/
#include<iostream>
using namespace std;
int main()
{
	int userinput = 0;
	cout << "Enter the number to display cube upto an entered number: ";
	cin >> userinput;
	//display the cube values using for loop
	for (int counter = 1; counter <= userinput; counter++)
	{
		//Number is : 1 and the cube of 1 is: 1
		cout << "Number is : " << counter << " and the cube of " << counter << " is: " << counter * counter * counter << endl;

	}
	return 0;
}
