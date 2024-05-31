/*Calculate the area of a rectangle.*/
#include<iostream>
using namespace std;
int main()
{
	int width = 0, length = 0, area = 0;
	cout << "Enter the length of rectangle: ";
	cin >> length;
	cout << "Enter the width of rectangle: ";
	cin >> width;
	area = length * width;
	cout << "Area of rectangle is: " << area;
	return 0;
}