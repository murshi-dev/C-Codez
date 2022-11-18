#include <string>
using namespace std;
class Student
{
private:
	string name;
	int mark;
public:
	Student();//only prototype required no definition
	void setName(string n);
	void setMark(int m);
	string getName();
	int getMark();
};
