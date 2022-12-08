#include "Product.h"
class PackagedFood:public Product//inherited class
{
private:
	double pricePerPack;
public:
	PackagedFood();
	void setPricePerPack(double p);
	double getPricePerPack();
};