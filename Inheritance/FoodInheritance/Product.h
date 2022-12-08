#pragma once
#include<string>
using namespace std;
class Product
{
protected:
	int barcode;
	string productName;
public:
	Product();
	void setBarCode(int b);
	void setProductName(string n);
	int getBarCode();
	string getProductName();
};
