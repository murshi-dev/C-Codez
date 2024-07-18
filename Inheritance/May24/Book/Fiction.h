#include "Book.h"
class Fiction :public Book
{
	private:
		double readLevel;
public:
	Fiction();
	void setReadLevel(double rl);
	double getReadLevel();
};