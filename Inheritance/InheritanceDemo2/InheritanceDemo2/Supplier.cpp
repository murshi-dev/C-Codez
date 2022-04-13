#include "Supplier.h"

	void Supplier::setProduct(string proname)
	{
		product=proname;
	}
	void Supplier::setCreditdue(double credit)
	{
		creditDue=credit;
	}
	string Supplier::getProduct()
	{
		return product;
	}
	double Supplier::getCreditdue()
	{
		return creditDue;
	}