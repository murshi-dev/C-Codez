/*Write a C++ code to find the average temperature.
Prompt for the maximum and minimum temperature and then do the calculation.*/
#include<iostream>
using namespace std;
int main()
{
	double max = 0.0, min = 0.0, average = 0.0;
	cout << "Enter the maximum temperature: ";
	cin >> max;
	cout << "Enter the minimum temperature: ";
	cin >> min;
	average = (max + min) / 2;
	cout << "Average is: " << average;
	return 0;
}