//input.h
class Input
{
//private:
protected://to enable length and breadth to be accessible outside Input class
	int length,breadth;
public:
	void setInput(int,int);
	int getLength();
	int getBreadth();
};