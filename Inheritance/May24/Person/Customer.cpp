#include "Customer.h"
Customer::Customer()
{
	balanceDue = 0.0;
}
void Customer::setBalanceDue(double balance)
{
	balanceDue = balance;
}
double Customer::getBalanceDue()
{
	return balanceDue;
}