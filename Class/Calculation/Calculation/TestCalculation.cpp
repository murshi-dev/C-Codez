#include "Calculation.h"
#include <iostream>
using namespace std;
void main()
{
	//create object
	Calculation obj1;
	//set values to num1,num2,num3
	obj1.setNum1(5.2);
	obj1.setNum2(2.1);
	obj1.setNum3(3.1);
	//display the values
	cout<<"Number 1: "<<obj1.getNum1()<<endl;
	cout<<"Number 2: "<<obj1.getNum2()<<endl;
	cout<<"Number 3: "<<obj1.getNum3()<<endl;
	//calculate and display the sum and product
	cout<<"Sum is: "<<obj1.getSum()<<endl;
	cout<<"Product is: "<<obj1.getProduct()<<endl;
	system("pause");
}