#include<string>
using namespace std;
class Student
{
private:
	string name;
	int mark;
public:
	//declare the methods - need not implement
	Student();
	void setName(string n);
	void setMark(int m);
	string getName();
	int getMark();
};
