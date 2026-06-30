#include<iostream>
using namespace std;
int main()
{
	int number = 0;
	cout << "Input a number: ";
	cin >> number;
	for (int count = 1; count <= 10; count++)
	{
		cout << number << "*" 
<< count << "=" 
<< number * count << endl;
	}
}
