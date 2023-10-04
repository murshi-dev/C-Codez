/*3.	Create a multiplication table for an entered number a shown below:
1 * 4 = 4
2 * 4 = 8
3 * 4 = 12
.
.
.
10 * 4 = 40
Write Pseudocode, draw flow chart and C++ code using for loop. 
*/
#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cout << "Enter any number to generate table: ";
	cin >> number;
	for (int counter = 1; counter <= 10; counter++)
	{
		cout << counter << "*" << number << "=" << counter * number << endl;
	}
	return 0;
}
