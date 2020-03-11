//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H
 
class CheckingAccount : public BankAccount //this is inheritance(extending)
{
public:

	CheckingAccount() = default; //creates a default constructor(so we can get one with 0 balance)
	explicit CheckingAccount(int b) : BankAccount(b) {  } //this calls to the parent class(BankAccount) and uses the explicit constructor

	int iGetBalance() const { return iBalance * (1 + getRate()); } //getRate needs to be const for a const function, this is overidding the function

private:

	//BankAccount::iBalance; //We can see the super classes balance due to it deriving from BankAccount, 
};

#endif