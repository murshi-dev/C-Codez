#include "Person.h"
class Supplier:public Person
{
private:
	string product;
	double creditDue;
public:
	void setProduct(string);
	void setCreditdue(double);
	string getProduct();
	double getCreditdue();
};