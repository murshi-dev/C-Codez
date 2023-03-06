//function program max of two and three numbers
#include<iostream>
using namespace std;
//function prototype 
double larger(double x, double y);
double largest(double x, double y,double z);
int main()
{
	double x = 0.0, y = 0.0,z=0.0,result=0.0;
	int choice = 0;

	cout << "1.Two Numbers max \n 2. Three numbers max" << endl;
	cout << "Input choice: ";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Input two numbers: ";
		cin >> x >> y;
		//function call
		result = larger(x, y);
		cout << "Larger number is " << result;
	}
	else if (choice == 2)
	{
		cout << "Input three numbers: ";
		cin >> x >> y>>z;
		//function call
		result = largest(x, y,z);
		cout << "Larger number is " << result;
	}
	else
	{
		cout << "invalid input";
	}
	
	return 0;
}
//function definition
//function header
double larger(double x, double y)
{
	//function body
	double max;
	if (x > y)
		max = x;
	else
		max = y;
	return max;
}
double largest(double x, double y,double z)
{
	double max;
	if (x > y && x > z)
		max = x;
	else if (y > x && y >z)
		max = y;
	else
		max = z;
	return max;
}