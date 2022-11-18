//Account.h
class Account
{
private:
	int id;
	double balance,annualInterestRate;
public:
	//no argument constructor
	Account();
	//getter/accessor methods
	int getId();
	double getBalance();
	double getAnnualInterestRate();
	//setter/mutator methods
	void setId(int aid);
	void setBalance(double b);
	void setAnnualInterestRate(double aIR);

	//other functions required for calculations
	double getMonthlyInterestRate();
	double getMonthlyInterest();
	void withdraw(double amount);
	void deposit(double amount);
};