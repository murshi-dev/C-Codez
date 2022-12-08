#include "PackagedFood.h"
PackagedFood::PackagedFood()
{
	pricePerPack = 0.0;
}
void PackagedFood::setPricePerPack(double p)
{
	pricePerPack = p;
}
double PackagedFood::getPricePerPack()
{
	return pricePerPack;
}