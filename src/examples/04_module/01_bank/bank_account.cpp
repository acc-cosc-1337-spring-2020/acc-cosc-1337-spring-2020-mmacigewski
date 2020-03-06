#include "bank_account.h"

//bank_account.cpp

void BankAccount::deposit(int amount)
{
	if (amount > 0)//checks to make sure you can't input a negative amount 
	{
		iBalance += amount;
	}
	else
	{
		throw Invalid("Amount must be greater than 0.\n"); //will call the Invalid class and stop execution(this is an exception)
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount < 0 ) //checks if amount <0 and amount > balance. If everything is good it goes into final else
	{
		throw Invalid("Amount must be greather than 0.\n");
	}
	else if (amount > iBalance)
	{
		throw Invalid("Insufficient Funds");
	}
	else //if everything is OK
	{
		iBalance -= amount;
	}
}

void BankAccount::open(int amount)
{
	if (amount < iMinBalanceToOpen)
	{
		throw Invalid("Amount must be at least 25 dollars");
	}

	iBalance += amount;
}

double BankAccount::rate = init_rate(); //allows us to access private variables

void display_balance(const BankAccount & b) //becomes a free function(not part of class)
{
	std::cout << "Balance is: " << b.iBalance << "\n";
}

std::ostream & operator<<(std::ostream & out, const BankAccount & b) //allows us to cout anything about account, the ostream & out is cout
{
	out << "Balance is: " << b.iBalance << "\n";

	return out;
}

std::istream & operator>>(std::istream & in, BankAccount & b)
{
	int amount{ 0 };
	std::cout << "Enter amount: ";
	in >> amount; //same as std::cin >> 
	b.deposit(amount); //has direct access to the classes private variables but we do not want to mess up the safeguards we have against protecting it

	return in;
}
