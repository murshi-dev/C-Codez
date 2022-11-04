#include<iostream>
using namespace std;
//prototype
int sum(int num1, int num2);
double sum(double num1, double num2);
int sum(int num1, int num2, int num3);
double sum(int num1, double num2);
double sum(double num1, int num2);
int main()
{
	int n1 = 0, n2 = 0, n3 = 0;
	double x = 0.0, y = 0.0;

	cout << "Enter two integers: ";
	cin >> n1 >> n2;
	cout << "Added value of two integers is: " << sum(n1, n2) << endl;

	cout << "Enter two decimals: ";
	cin >> x >> y;
	cout << "Added value of two decimals is: " << sum(x, y) << endl;

	cout << "Enter three integers: ";
	cin >> n1 >> n2 >> n3;
	cout << "Added value of three integers is: " << sum(n1, n2, n3) << endl;

	cout << "Enter an integer and a decimal: ";
	cin >> n1 >> x;
	cout << "Added value of an integer and a decimal is: " << sum(n1, x) << endl;

	cout << "Enter a decimal and an integer: ";
	cin >> x >> n1;
	cout << "Added value of a decimal and an integer is: " << sum(x, n1)<<endl;

	return 0;
}
//function definitions
int sum(int num1, int num2)
{
	return (num1 + num2);
}
double sum(double num1, double num2)
{
	return (num1 + num2);
}
int sum(int num1, int num2, int num3)
{
	return (num1 + num2 + num3);
}
double sum(int num1, double num2)
{
	return(num1 + num2);
}
double sum(double num1, int num2)
{
	return (num1 + num2);
}