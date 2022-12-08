#include "Product.h"
class WeighedFood :public Product//inherited class
{
private:
	double weight;
	double pricePerKilo;
public:
	WeighedFood();
	void setWeight(double w);
	void setPricePerKilo(double p);
	double getWeight();
	double getPricePerKilo();
};