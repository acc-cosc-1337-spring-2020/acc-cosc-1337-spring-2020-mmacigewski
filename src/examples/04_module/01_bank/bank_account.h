//bank_account.h
class BankAccount
{
public:

	BankAccount(int num) : balance{ num } {}; //HOW IT IS DONE IN INDUSTRY
	//int iGetBalance() { return balance; } //THIS CAN BE MODIFIED
	int iGetBalance() const { return balance; } //THIS CAN"T BE MODIFIED DUE TO CONST
	void deposit(int amount);
	void withdraw(int amount);

protected:

private:

	int balance{ 0 }; //ALWAYS INITIALIZE //Intitializes at the moment it is created

};