#include "Person.h"
class Customer:public Person
{
private:
	double balanceDue;
public:
	void setBalanceDue(double);
	double getBalanceDue();
};