#include<iostream>
using namespace std;
double larger(double x, double y);
int main()
{
	double n1 = 0.0, n2 = 0.0, result = 0.0;
	cout << "Enter two numbers: ";
	cin >> n1 >> n2;
	//call the function 'larger' to compare the entered values n1 and n2
	result = larger(n1, n2);
	//display the result(max value)
	cout << "Larger number is: " << result << endl;
	return 0;
}
//function definition
double larger(double x, double y)
{
	double max;
	//write the logic to compare two numbers using 'if'
	if (x > y)
		max = x;
	else
		max = y;
	//return the max value
	return max;
}