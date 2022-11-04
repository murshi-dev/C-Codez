//area of rectangle
#include<iostream>
using namespace std;
//function prototype
//double getLength(double length); OR
double getLength(double);
double getBreadth(double);
double calculateArea(double, double);
void displayArea(double);
int main()
{
	double length = 0.0, breadth = 0.0, result = 0.0;
	//function calling
	length=getLength(length);//gets the length from user and stores it in 'length' variable
	breadth = getBreadth(breadth);
	result = calculateArea(length, breadth);
	displayArea(result);

	return 0;
}
//function definition
double getLength(double length)
{
	cout << "Enter the length: ";
	cin >> length;
	return length;
}
double getBreadth(double breadth)
{
	cout << "Enter the breadth: ";
	cin >> breadth;
	return breadth;
}
double calculateArea(double length, double breadth)
{
	int result = length * breadth;//to calculate area
	return result;
}
void displayArea(double result)
{
	cout << "Area of rectangle is: " << result << endl;
}