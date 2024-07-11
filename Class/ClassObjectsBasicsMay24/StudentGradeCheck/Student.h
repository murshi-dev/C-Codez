#include<string>
using namespace std;
class Student
{
private:
	//declare the properties
	string name;
	int mark;
public:
	//declare the methods
	Student();
	void setName(string n);
	void setMark(int m);
	string getName();
	int getMark();
	int calculateGrade();
};