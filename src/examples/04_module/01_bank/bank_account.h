//bank_account.h
#include <string>

class BankAccount
{
public:

	BankAccount(int num) : balance{ num } {}; //HOW IT IS DONE IN INDUSTRY
	//int iGetBalance() { return balance; } //THIS CAN BE MODIFIED
	int iGetBalance() const { return balance; } //THIS CAN"T BE MODIFIED DUE TO CONST, do this with GET functions
	void deposit(int amount);
	void withdraw(int amount);

private:

	int balance; //ALWAYS INITIALIZE //Intitializes at the moment it is created

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