#include<iostream>
using namespace std;
//prototype
int sum(int num1, int num2);
double sum(double num1, double num2);
int sum(int num1, int num2, int num3);
double sum(int num1, double num2);
int mainee()
{
	int n1 = 0, n2 = 0, n3 = 0;
	double x = 0.0, y = 0.0;
	//function call
	cout << "Sum of two integers is: "<<sum(n1, n2)<<endl;
	cout << "Sum of two decimal is: "<<sum(x, y) << endl;
	cout << "Sum of three integers is: "<<sum(n1,n2,n3) << endl;
	cout << "Sum of an integer and a decimal is: "<<sum(n1, x) << endl;
	return 0;
}
//function definition
int sum(int num1, int num2)
{
	cout << "Enter two integer numbers: ";
	cin >> num1 >> num2;
	return (num1 + num2);
	//int sum = num1 + num2;
	//return sum;
}
double sum(double num1, double num2)
{
	cout << "Enter two decimal numbers: ";
	cin >> num1 >> num2;
	return (num1 + num2);
}
int sum(int num1, int num2, int num3)
{
	cout << "Enter three intger numbers: ";
	cin >> num1 >> num2 >> num3;
	return (num1 + num2 + num3);
}
double sum(int num1, double num2)
{
	cout << "Enter an integer and a decimal number: ";
	cin >> num1 >> num2;
	return (num1 + num2);
}