#include "Calculation.h"
Calculation::Calculation()
{
	num1=0;
	num2=0;
	num3=0;
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
void Calculation::setNum1(double n1)
{
	num1=n1;
}
void Calculation::setNum2(double n2)
{
	num2=n2;
}
void Calculation::setNum3(double n3)
{
	num3=n3;
}

double Calculation::getSum()
{
	return num1+num2+num3;
}
double Calculation::getProduct()
{
	return num1*num2*num3;
}