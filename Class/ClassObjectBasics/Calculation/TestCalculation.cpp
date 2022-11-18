#include "Calculation.h"
#include<iostream>
using namespace std;
int main()
{
	double a, b, c;
	Calculation obj1;
	cout << "Enter three decimal numbers";
	cin >> a >> b >> c;

	//assign the values of a, b c to num1 num2 and num3 using obj1 and setter methods
	obj1.setNum1(a);
	obj1.setNum2(b);
	obj1.setNum3(c);

	//display the entered numbers using obj1 and getter methods
	cout << "First Number is: " << obj1.getNum1() << endl;
	cout << "Second Number is: " << obj1.getNum2() << endl;
	cout << "Third Number is: " << obj1.getNum3() << endl;

	//do the calculation using obj1 and getSum , getProduct
	cout << "Added value is: " << obj1.getSum() << endl;
	cout << "Multiplied value is: " << obj1.getProduct() << endl;
	return 0;
}