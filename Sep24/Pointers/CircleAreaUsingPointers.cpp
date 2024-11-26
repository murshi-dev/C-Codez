//calculate area of circle -- user defined input for radius
//use pointers to manage memory
#include<iostream>
using namespace std;
int main()
{
	double radius = 0.0;
	double* radiusPtr = &radius;

	cout << "Input the radius of the circle: ";
	cin >> *radiusPtr;//assign to the pointer variable

	cout << "Area of circle: " << (3.14 * (*radiusPtr) * (*radiusPtr));

	cout << "ADDRESS ANALYSIS" << endl;
	cout << "Value stored in radius: " << radius << endl;
	cout << "Address of radius: " << &radius << endl;
	cout << "Value stored in radiusPtr: " << radiusPtr << endl;
	cout << "radiusPtr points to the value: " << *radiusPtr << endl;

	return 0;
}