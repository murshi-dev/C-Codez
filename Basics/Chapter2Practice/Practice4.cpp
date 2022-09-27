//Write a C++ code to find the area of a rectangle.
//input-two-length,width
//output-one--area
#include<iostream>
using namespace std;
void main()
{
	//declare variables length,width,area
	//and initialise them with 0
	double length = 0.0, width = 0.0, area = 0.0;
	//prompt user to enter the length
	cout << "Enter the length" << endl;//endl - end line
	//endl moves cursor to next line
	//accept length
	cin >> length;
	//prompt user to enter the width
	cout << "Enter the width" << endl;
	//accept width
	cin >> width;
	//calculate area
	area = length * width;
	//display area
	cout << "Area is " << area;
	cout << "Area of rectangle with length " << length << " and width " << width << "is " << area;
	system("pause");
}