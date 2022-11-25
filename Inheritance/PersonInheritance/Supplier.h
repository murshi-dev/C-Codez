
#include "Person.h"
#include <string>
using namespace std;
class Supplier :public Person
{
private:
	string product;
	double creditDue;
public:
	Supplier();
	void setSupplierInfo(string p, double c);
	//void setProduct(string p)
	//void setCreditDue(double c);
	string getProduct();
	double getCreditDue();
};



