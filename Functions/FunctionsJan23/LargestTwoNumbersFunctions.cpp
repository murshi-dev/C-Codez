//example 2 - function program to compare two numbers
#include<iostream>
using namespace std;
//function prototype 
double larger(double x, double y);
int main()
{
	double x = 0.0, y = 0.0,result=0.0;
	cout << "Input two numbers: ";
	cin >> x >> y;
	//function call
	result=larger(x, y);
	cout << "Larger number is " << result;
	return 0;
}
//function definition
double larger(double x, double y)//function header
{
	//function body
	double max;
	if (x > y)
		max = x;
	else
		max = y;
	return max;
}
