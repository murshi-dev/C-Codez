#include "Calculation.h"
Calculation::Calculation()
{
	num1 = num2 = 0;
}
void Calculation::setNumbers(int a, int b)
{
	num1 = a;
	num2 = b;
}
int Calculation::getNum1()
{
	return num1;
}
int Calculation::getNum2()
{
	return num2;
}