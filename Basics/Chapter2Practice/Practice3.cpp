//Write a C++ code to find the area of a rectangle.
#include<iostream>
using namespace std;
int main()
{
	double length = 0.0, breadth = 0.0, area = 0.0;
	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the breadth: ";
	cin >> breadth;
	area = length * breadth;
	cout << "Area is: " << area;
	return 0;
}