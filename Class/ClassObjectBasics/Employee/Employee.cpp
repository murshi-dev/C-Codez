//Employee.cpp -- write function definition here
//include the Employee header file
#include "Employee.h"
Employee::Employee()
{
	empNum = 0;
	empComp = 0.0;
}
//Setter methods or Mutators
void Employee::setEmpNum(int em_num)
{
	empNum = em_num;
}
void Employee::setEmpComp(double em_comp)
{
	empComp = em_comp;
}
//Getter methods or Accessors
int Employee::getEmpNum()
{
	return empNum;
}
double Employee::getEmpComp()
{
	return empComp;
}