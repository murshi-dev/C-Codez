/*Input two numbers from user. Compare the two numbers and display the largest number among the both. Using logical operators check if the entered numbers are positive numbers. If the numbers are same display ‘same numbers entered’. 
Repeat the program for 5 sets of numbers. Write Pseudocode, draw flow chart and C++ code using while loop
*/
#include<iostream>
using namespace std;
int main()
{
	int counter = 0;
	while (counter <= 5)
	{
		int n1 = 0, n2 = 0;
		cout << "Input two numbers: ";
		cin >> n1 >> n2;
		if (n1 < 0 || n2 < 0)
		{
			cout << "Enter positive numbers only!";
		}
		else if (n1 == n2)
		{
			cout << "Same numbers entered!";
		}
		else if (n1 > n2)
		{
			cout << n1<<" is greater than "<<n2;
		}
		else
		{
			cout << n2 << " is greater than " << n1;
		}
		counter++;
	}

	return 0;
}