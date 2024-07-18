#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include<iostream>
using namespace std;
int main()
{
	int n1 =0, n2 = 0;

	Addition a1;
	cout << "Input two numbers: ";
	cin >> n1 >> n2;
	a1.setNumbers(n1, n2);
	cout << "First Number: " << a1.getNum1() << endl;
	cout << "Second Number: " << a1.getNum2() << endl;
	cout << "Added Value: " << a1.CalcAdd() << endl;

	Subtraction b1;
	cout << "Input two numbers: ";
	cin >> n1 >> n2;
	b1.setNumbers(n1, n2);
	cout << "First Number: " << b1.getNum1() << endl;
	cout << "Second Number: " << b1.getNum2() << endl;
	cout << "Subtracted Value: " << b1.CalcSub() << endl;

	Multiplication m1;
	cout << "Input two numbers: ";
	cin >> n1 >> n2;
	m1.setNumbers(n1, n2);
	cout << "First Number: " << m1.getNum1() << endl;
	cout << "Second Number: " << m1.getNum2() << endl;
	cout << "Multiplied Value: " << m1.CalcMult() << endl;

	return 0;
}