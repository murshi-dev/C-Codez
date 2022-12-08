#include "Product.h"
Product::Product()
{
	barcode = 0;
	productName = "";
}
void Product::setBarCode(int b)
{
	barcode = b;
}
void Product::setProductName(string n)
{
	productName = n;
}
int Product::getBarCode()
{
	return barcode;
}
string Product::getProductName()
{
	return productName;
}