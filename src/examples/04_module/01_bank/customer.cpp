//customer.cpp
#include "customer.h"

void Customer::add_account(std::unique_ptr<BankAccount>& act)
{
	accounts.push_back(std::move(act)); //moves act to the account vector
}

std::ostream& operator<<(std::ostream& out, const Customer& c)
{
	for (auto& account : c.accounts) //the auto& account calls the reference allowing it to be a value(since it is in pointer format)
	{
		out << *account << "\n";//no need to call function, because of the ostream overloading, in the current situation wihtout the 
		//* it will display address, the * dereferences it to the value
	}
	return out;
}
