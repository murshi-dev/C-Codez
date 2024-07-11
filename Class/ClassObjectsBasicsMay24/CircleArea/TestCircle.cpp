#include "Circle.h"
#include<iostream>
using namespace std;
int main()
{
	double rad = 0.0;
	cout << "Input the radius: ";
	cin >> rad;

	Circle c1;
	c1.setRadius(rad);
	cout << "Radius: "<<c1.getRadius() << endl;
	cout << "Area: " << c1.calculateArea() << endl;
	return 0;
}
