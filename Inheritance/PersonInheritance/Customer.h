
#include "Person.h"
//create the Customer class from person class
class Customer :public Person
{
private:
	double balanceDue;
public:
	Customer();
	void setBalanceDue(double bal);
	double getBalanceDue();
};









