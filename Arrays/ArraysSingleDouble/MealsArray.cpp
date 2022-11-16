/*Riley Residence Hall charges different rates for room based on the number of meals per day the student wants.
The rate with no meals is RM 300. With one meal per day, the rate is Rm 450. 
With two meals per day, the rate is RM 520, and with three meals per day, the rate is RM 590. 
Store these rates in an array. Write a program that allows a student to enter the number of meals desired per day and output the rate.
*/
#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	int meals[4] = { 300,450,520,590 };
	cout << "Enter the number of meals preferred: ";
	cin >> number;
	cout << "Rate for " << number << "meals is: " << meals[number] << endl;
	return 0;
}


