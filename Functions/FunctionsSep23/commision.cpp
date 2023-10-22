/*Construct a program in C++ that includes two functions. The first function should ask a salesperson for daily sales and then return this figure to the main program. The second function should calculate the salesperson’s commission based on the following rates:

Sales	Commission
0–999 	3%
1,000–2,999	3.5%
3,000–up	4.5%

The value of the calculated commission should be returned to the main program, which then displays the commission value.
*/

double getDailySales();
double calculateCommission(double sales);
int main() 
{
    double dailySales = 0.0, commission=0.0;
    dailySales = getDailySales();
    commission = calculateCommission(dailySales);
    cout << "Commission: RM: " << commission << endl;
    return 0;
}
double getDailySales() 
{
    double sales = 0.0;
    cout << "Enter the value of daily sales: RM ";
    cin >> sales;
    return sales;
}
double calculateCommission(double sales) 
{
    double commission = 0.0 ;
    if (sales >= 3000) 
    {
        commission = sales * 0.045;
    } 
    else if (sales >= 1000) 
    {
        commission = sales * 0.035;
    } 
    else 
    {
        commission = sales * 0.03;
    }
    return commission;
}

    
