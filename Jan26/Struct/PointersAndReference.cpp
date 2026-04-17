//pointers and reference 
#include<iostream>
using namespace std;
int main()
{
	int num = 0;//normal integer variable

	cout << "value of num: " << num << endl;//didplays 0
	cout << "address/memory of num: " << &num << endl;//displays hex address

	//store the address/memory of num in a POINTER variable
	int *pointer = &num;
	cout << "pointer variable value: " << pointer << endl;//displays hex address

	return 0;
}