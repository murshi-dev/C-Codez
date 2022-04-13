//#include "Rectangle.h"
#include "Triangle.h"

#include<iostream>
using namespace std;
void main()
{
	//create object for Rectangle
	//always create object for derived classes, not base classes
	//Rectangle r1;
	//using r1 object call the setter and getter methods from the 'Input' class
	//r1.setInput(23,32);
	//cout<<"Length is: "<<r1.getLength()<<endl;
	//cout<<"Breadth is: "<<r1.getBreadth()<<endl;

	//using r1 call the function to calculate area
	//from its own class 'Rectangle'
	//cout<<"Area of rectangle is: "<<r1.calAreaRectangle()<<endl;

	Triangle t1;
	t1.setInput(5,3);
	cout<<"Length is: "<<t1.getLength()<<endl;
	cout<<"Breadth is: "<<t1.getBreadth()<<endl;
	cout<<"Area of triangle is: "<<t1.calAreaTriangle()<<endl;

	system("pause");
}