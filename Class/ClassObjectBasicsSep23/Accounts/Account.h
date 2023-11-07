class Account
{
private:
	int id;
	double balance;
public:
	Account();
	
	void setId(int id);
	void setBalance(double balance);

	int getID();
	double getBalance();
	
	double withdraw(double amountToWithdraw);
	double deposit(double amountToDeposit);

};