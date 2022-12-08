#include "WeighedFood.h"
WeighedFood::WeighedFood()
{
	weight = 0.0;
	pricePerKilo = 0.0;
}
void WeighedFood::setWeight(double w)
{
	weight = w;
}
void WeighedFood::setPricePerKilo(double p)
{
	pricePerKilo = p;
}
double WeighedFood::getWeight()
{
	return weight;
}
double WeighedFood::getPricePerKilo()
{
	return pricePerKilo;
}