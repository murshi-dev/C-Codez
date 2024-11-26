//Write code to find the square of a number using functions.
// Pass parameters by value, reference and pointers.
#include<iostream>
using namespace std;
//pass by value
int square(int num)
{
	num = num * num;
	return num;
}
//pass by reference
void squareRef(int& n1)
{
	n1 = n1 * n1;
}
//pass by pointer
void squarePtr(int* n2)
{
	*n2 = (*n2) * (*n2);
}
int main()
{
	int num = 10;
	cout << "Square is: " << square(num) << endl;//100

	int n1 = 20;
	squareRef(n1);
	cout << "Square is: " << n1 << endl;//400


	int n2 = 30;
	squarePtr(&n2);
	cout << "Square is: " << n2 << endl;
	return 0;
}