//user input to initialise array values;
#include<iostream>
using namespace std;
int main()
{
	int marks[5] = { 0 };
	int total = 0;
	double average = 0.0;
	//use for loop to input array elements
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter mark " <<i+1<<": ";
		cin >> marks[i];
		//total all the elements
		total += marks[i];//total=total+marks[i];
	}
	//use for loop to output array elements
	cout << "Entered marks are: " << endl;
	for (int j = 0; j < 5; j++)
	{
		cout << "Mark "<<j+1<<":"<<marks[j] << endl;
	}
	cout << "Total of all the marks is: " << total;
	average = total / 5;
	cout << "Average is: " << average << endl;

	return 0;
}