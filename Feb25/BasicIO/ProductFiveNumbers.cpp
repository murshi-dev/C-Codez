//calculate and display the product(multiply) of five numbers
#include<iostream>
using namespace std;
int mainSample2()
{
	//declare and initialise the required variables
	double n1 = 0.0, n2 = 0.0, n3 = 0.0, n4 = 0.0, n5 = 0.0, product = 0.0;
	//prompt and input the numbers
	cout << "Enter any five numbers: ";
	cin >> n1 >> n2 >> n3 >> n4 >> n5;
	
	//calculate the product
	product = n1 * n2 * n3 * n4 * n5;

	//display the product
	cout << "Product is: " << product;

	return 0;
}