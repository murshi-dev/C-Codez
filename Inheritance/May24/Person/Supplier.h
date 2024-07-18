#include "Person.h"
#include<string>
using namespace std;
class Supplier :public Person
{
private:
	string product;
	double creditDue;
public:
	Supplier();
	void setproduct(string pr);
	void setCreditDue(double cd);
	string getProduct();
	double getCreditDue();
};