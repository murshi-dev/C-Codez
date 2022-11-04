#include<iostream>
using namespace std;
//prototype
int square(int x);
double square(double y);
int main()
{
	int a = 0;
	double b = 0.0;
	cout << "Enter an integer: ";
	cin >> a;
	cout << "Square of entered " << a << "is: " << square(a)<<endl;//function call for integer

	cout << "Enter a decimal: ";
	cin >> b;
	cout << "Square of entered " << b << "is: " << square(b)<<endl;//function call for decimal
	return 0;
}
//function definition
int square(int x)
{
	return x * x;
}
double square(double y)
{
	return y * y ;
}