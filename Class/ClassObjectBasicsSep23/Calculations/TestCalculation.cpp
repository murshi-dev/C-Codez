#include "Calculation.h"
#include<iostream>
using namespace std;
int main()
{
	//create object
	Calculation set1;
	//declare local variables
	double a = 0.0, b = 0.0, c = 0.0;
	//prompt and input three numbers
	cout << "Input three numbers: ";
	cin >> a >> b >> c;
	//using the objects and setter methods assign the values to num1,num2 and num3
	set1.setNum1(a);
	set1.setNum2(b);
	set1.setNum3(c);
	//display the values using objects and getter methods
	cout << "First value: " << set1.getNum1() << endl;
	cout << "Second value: " << set1.getNum2() << endl;
	cout << "Third value: " << set1.getNum3() << endl;
	//calculate the sum
	cout << "Sum of all the three values: " << set1.calSum();
	//calculate the product
	cout << "Product of all the three values: " << set1.calProduct();

	return 0;
}