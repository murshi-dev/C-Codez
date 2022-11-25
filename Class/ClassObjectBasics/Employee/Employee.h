//Employee.h ---contains the function declaration --prototype
class Employee
{
	//properties
private:
	int empNum;
	double empComp;
	//methods
public:
	//Constructor
	Employee();
	//Setter methods or Mutators
	void setEmpNum(int em_num);
	void setEmpComp(double em_comp);
	//Getter methods or Accessors
	int getEmpNum();
	double getEmpComp();
};
