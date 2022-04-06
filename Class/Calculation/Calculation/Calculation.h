//Calculation.h
class Calculation
{
private:
	double num1,num2,num3;
public:
	Calculation();
	
	double getNum1();
	double getNum2();
	double getNum3();

	void setNum1(double);
	void setNum2(double);
	void setNum3(double);

	double getSum();
	double getProduct();
};