#include "Customer.h"
Customer::Customer()
{
	balanceDue = 0.0;
}
void Customer::setBalanceDue(double bal)
{
	balanceDue = bal;
}
double Customer::getBalanceDue()
{
	return balanceDue;
}