//customer.h
#ifndef  CUSTOMER_H
#define CUSTOMER_H

#include "bank_account.h"

#include <vector>
#include <iostream>
#include <memory>



class Customer
{
public:

	void add_account(std::unique_ptr<BankAccount>& act);
	friend std::ostream& operator<<(std::ostream& out, const Customer& c);

private:
	std::vector<std::unique_ptr<BankAccount>> accounts; //this fixes it because you cannot create instance of bank account, so it creates space,
	//BUT IT IS A REFERENCE, So you need to DEREFERENCE
};

#endif // ! CUSTOMER_H
