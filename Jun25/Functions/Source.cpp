//sales commssion calculation 
#include<iostream>
using namespace std;
//function prototype
double getDailySales();//input
double calculateCommission(double sales);//calculation
int main1()
{
	double dailySales = 0.0, calCommission = 0.0;
	//function call
	dailySales = getDailySales();
	calCommission = calculateCommission(dailySales);
	cout << "Commission for the " << dailySales << " is " << calCommission << endl;
	return 0;
}
//function definition
double getDailySales()
{
	double sales = 0.0;
	cout << "Input the sales value: ";
	cin >> sales;
	return sales;
}
double calculateCommission(double sales)
{
	double commission = 0.0;
	if (sales >= 3000)
		commission = sales * 0.045;
	else if (sales >= 1000)
		commission = sales * 0.035;
	else
		commission = sales * 0.03;
	return commission;
}
