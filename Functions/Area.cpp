#include<iostream>
using namespace std;
//function prototype
double getLength(double);
double getBreadth(double);
double calculateArea(double, double);
void displayArea(double);
int main()
{
	double length = 0, breadth = 0, area = 0;
	//function call to accept length
	length = getLength(length);
	//function call to accept breadth
	breadth = getBreadth(breadth);
	//function call to calculate area
	area = calculateArea(length, breadth);
	//function call to display output--area
	displayArea(area);

	system("pause>0");
}
//function to accept length from user
double getLength(double l)
{
	cout << "Enter the length: ";
	cin >> l;
	return l;
}
//function to accept breadth from user
double getBreadth(double b)
{
	cout << "Enter the breadth: ";
	cin >> b;
	return b;
}
//calculate the area
double calculateArea(double l, double b) {
	double a = l * b;
	return a;
}
//display output --area of rectangle
void displayArea(double a) {
	cout << "Area of rectangle is: " << a;
}