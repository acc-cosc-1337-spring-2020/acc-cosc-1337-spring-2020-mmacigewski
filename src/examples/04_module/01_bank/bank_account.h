//bank_account.h
#include <string>

class BankAccount
{
public:
	//c++ automatically creates a default constructor if one is not made

	BankAccount() = default;//default constructor, BEST PRACTICE says I want you to stay as default constructor
	explicit BankAccount(int iNum) : iBalance{ iNum } {}; //HOW IT IS DONE IN INDUSTRY, to use this constructor you have to expilicitly call it

	//int iGetBalance() { return balance; } //THIS CAN BE MODIFIED
	int iGetBalance() const { return iBalance; } //THIS CAN"T BE MODIFIED DUE TO CONST, do this with GET functions
	void deposit(int iAmount);
	void withdraw(int iAmount);
	void open(int iAmount);

private:

	int iBalance{ 0 }; //ALWAYS INITIALIZE //Intitializes at the moment it is created
	const int iMinBalanceToOpen{ 25 };
};

//BAD PRACTICE CREATE A SEPERATE NEXT TIME

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {} //creates a message
	std::string get_error()const {return message;} //returns the message
private:
	std::string message;
};