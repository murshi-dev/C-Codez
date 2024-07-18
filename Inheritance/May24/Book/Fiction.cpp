#include "Fiction.h"
Fiction::Fiction()
{
	readLevel = 0.0;
}
void Fiction::setReadLevel(double rl)
{
	readLevel = rl;
}
double Fiction::getReadLevel()
{
	return readLevel;
}
