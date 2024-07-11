#include "Circle.h"
Circle::Circle()
{
	radius = 0.0;
}
void Circle::setRadius(double r)
{
	radius = r;
}
double Circle::getRadius()
{
	return radius;
}
double Circle::calculateArea()
{
	return (3.14 * radius * radius);
}