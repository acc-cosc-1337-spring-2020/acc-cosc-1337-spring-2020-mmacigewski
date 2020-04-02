//bank_account.h
#include <string>
#include <iostream>

#ifndef BANK_ACCOUNT_H //this is called header guarding(prevents compiler from copying code multiple times)
#define BANK_ACCOUNT_H

class BankAccount
{
public:
	//c++ automatically creates a default constructor if one is not made

	BankAccount() = default;//default constructor, BEST PRACTICE says I want you to stay as default constructor, does nothing
	explicit BankAccount(int iNum) : iBalance{ iNum } {}; //HOW IT IS DONE IN INDUSTRY, to use this constructor you have to expilicitly call it

	//int iGetBalance() { return balance; } //THIS CAN BE MODIFIED
	int iGetBalance() const { return iBalance; } //THIS CAN"T BE MODIFIED DUE TO CONST, do this with GET functions
	double getRate() const { return rate; }

	void deposit(int iAmount);
	void withdraw(int iAmount);
	void open(int iAmount);

	friend void display_balance(const BankAccount &b); //NOT PART OF THE CLASS

	//this is operator overloading, the first argument is the operator you are givng more functionality, and the second argument is the class we are allowing it to mess with
	friend std::ostream& operator<<(std::ostream& out, const BankAccount& b); //ostream is cout, allows for cout //free function

	//to overload cin
	//we are giving more functionality to cin, allowing us to read write the second arguement which is BankAccount
	friend std::istream& operator>>(std::istream& in, BankAccount& b);

protected: //classes that extend this class have access to it
	int iBalance{ 0 }; //ALWAYS INITIALIZE //Intitializes at the moment it is created

private:
		 
	const int iMinBalanceToOpen{ 25 }; //constant makes it read only

	//Static variables when used inside function are initialized only once, and then they hold there value even through function calls.
	//These static variables are stored on static storage area
	static double rate;
	
	static double init_rate() { return .025; } //function to initiate rate
};

#endif

//BAD PRACTICE CREATE A SEPERATE NEXT TIME

#ifndef INVALID_H //this is called header guarding(prevents compiler from copying code multiple times)
#define INVALID_H

class Invalid
{
public:
	Invalid(std::string msg) : message{ msg } {} //creates a message
	std::string get_error()const {return message;} //returns the message
private:
	std::string message;
};

#endif