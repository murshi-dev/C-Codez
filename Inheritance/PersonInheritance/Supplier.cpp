#include "Supplier.h"
Supplier::Supplier()
{
	product = "";
	creditDue = 0.0;
}
void Supplier::setSupplierInfo(string p, double c)
{
	product = p;
	creditDue = c;
}
string Supplier::getProduct()
{
	return product;
}
double Supplier::getCreditDue()
{
	return creditDue;
}