#include "Book.h"
class NonFiction :public Book
{
private:
	int numPages;
public:
	NonFiction();
	void setNumPages(int np);
	int getNumPages();
};