class Calculation
{
private:
	double num1, num2, num3;
public:
	Calculation();
	void setNum1(double n1);
	void setNum2(double n2);
	void setNum3(double n3);
	double getNum1();
	double getNum2();
	double getNum3();
	double calSum();
	double calProduct();
};