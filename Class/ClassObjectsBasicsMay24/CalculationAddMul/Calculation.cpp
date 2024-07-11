#include "Calculation.h"
Calculation::Calculation()
{
	num1 = num2 = num3 = 0.0;
}
void Calculation::setNum(double n1, double n2, double n3)
{
	num1 = n1;
	num2 = n2;
	num3 = n3;
}
double Calculation::getNum1()
{
	return num1;
}
double Calculation::getNum2()
{
	return num2;
}
double Calculation::getNum3()
{
	return num3;
}
double Calculation::calSum()
{
	return (num1 + num2 + num3);
}
double Calculation::calProduct()
{
	return (num1 * num2 * num3);
}