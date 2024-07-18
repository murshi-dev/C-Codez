#include "Person.h"
class Customer:public Person
{
private:
	double balanceDue;
public:
	Customer();
	void setBalanceDue(double balance);
	double getBalanceDue();
};