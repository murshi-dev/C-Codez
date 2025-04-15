#include<iostream>
using namespace std;
//FUNCTION PROTOTYPE 
int calculateArea(int, int);
int calculatePerimeter(int, int);
void displayDimensions(int, int);
int main()
{
	int length1 = 10, width1 = 5;
	//FUNCTION CALL
	int area1 = calculateArea(length1, width1);
	int perimeter1 = calculatePerimeter(length1, width1);
	displayDimensions(length1, width1);
	cout << "Area of rectangle1: " << area1<<endl;
	cout << "Perimeter is " << perimeter1 << endl;

	int length2 = 100, width2 = 50;
	//FUNCTION CALL
	int area2 = calculateArea(length2, width2);
	int perimeter2 = calculatePerimeter(length2, width2);
	displayDimensions(length2, width2);
	cout << "Area of rectangle2: " << area2<<endl;
	cout << "Perimeter is " << perimeter2 << endl;

	return 0;
}
//FUNCTION DEFINITION
int calculateArea(int length, int width)//FUNCTION HEADING / SIGNATURE
{
	return (length * width); //FUNCTION BODY
}
int calculatePerimeter(int length, int width) //FUNCTION HEADING / SIGNATURE
{
	return (2 * (length + width)); //FUNCTION BODY
}
void displayDimensions(int length, int width)
{
	cout << "Length of rectangle is: " << length << endl;
	cout << "Width of rectangle is: " << width << endl;
	//no return type here --hence return type of function is 'void'
}










