class Accounts
{
private:
	int id;
	double balance;
public:
	Accounts();
	void setId(int identity);
	void setBalance(double bal);
	int getId();
	double getBalance();
	double withdraw(double amountToWithdraw);
	double deposit(double amountToDeposit);
};