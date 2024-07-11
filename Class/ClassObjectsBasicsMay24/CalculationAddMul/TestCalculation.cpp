#include "Calculation.h"
#include<iostream>
using namespace std;
int main()
{
	double a = 0.0, b = 0.0, c = 0.0;
	cout << "Input three numbers: ";
	cin >> a >> b >> c;
	Calculation obj1;
	obj1.setNum(a, b, c);
	cout<<"First value: "<<obj1.getNum1()<<endl;
	cout << "Second value: " << obj1.getNum2() << endl;
	cout << "Third value: " << obj1.getNum3() << endl;
	cout << "Sum of all the values: " << obj1.calSum() << endl;
	cout << "Product of all the values: " << obj1.calProduct() << endl;
	return 0;
}