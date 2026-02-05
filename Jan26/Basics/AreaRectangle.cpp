//Calculate the area of a rectangle.
#include<iostream>
using namespace std;
int main()
{
	//declare and initialise variables
	double width = 0.0, height = 0.0, area = 0.0;
	//prompt and accept input
	cout << "Enter the width of the rectangle: ";
	cin >> width;
	cout << "Enter the height of the rectangle: ";
	cin >> height;
	//calculate-process
	area = width * height;
	//output result
	cout << "Area of Rectangle is " << area;
	return 0;
}