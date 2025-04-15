#include<iostream>
using namespace std;
//FUNCTION PROTOTYPE 
int calculateArea(int, int);
int main()
{
	int length1 = 10, width1 = 5;
	//FUNCTION CALL
	int area1 = calculateArea(length1, width1);
	cout << "Area of rectangle1: " << area1<<endl;

	int length2 = 100, width2 = 50;
	//FUNCTION CALL
	int area2 = calculateArea(length2, width2);
	cout << "Area of rectangle2: " << area2<<endl;

	return 0;
}
//FUNCTION DEFINITION
int calculateArea(int length, int width)//FUNCTION HEADING / SIGNATURE
{
	return (length * width); //FUNCTION BODY
}







