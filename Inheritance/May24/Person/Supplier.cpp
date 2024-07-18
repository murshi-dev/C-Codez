#include "Supplier.h"
Supplier::Supplier()
{
	product = "";
	creditDue = 0.0;
}
void Supplier::setproduct(string pr)
{
	product = pr;
}
void Supplier::setCreditDue(double cd)
{
	creditDue = cd;
}
string Supplier::getProduct()
{
	return product;
}
double Supplier::getCreditDue()
{
	return creditDue;
}