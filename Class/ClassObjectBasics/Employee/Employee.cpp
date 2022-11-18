#include "Employee.h"
Employee::Employee()
{
	emp_num=0;
	emp_comp=0.0;
}
int Employee::getEmpNum()
{
	return emp_num;
}
double Employee::getEmpComp()
{
	return emp_comp;
}
void Employee::setEmpNum(int num)
{
	emp_num=num;
}
void Employee::setEmpComp(double comp)
{
	emp_comp=comp;
}
