class Calculation
{
private:
	double num1;
	double num2;
	double num3;
public:
	//constructor
	Calculation();
	//setter methods
	void setNum1(double n1);
	void setNum2(double n2);
	void setNum3(double n3);
	//getter methods
	double getNum1();
	double  getNum2();
	double getNum3();
	//method to calculate sum
	double getSum();
	//method to calculate product
	double getProduct();
};