#include "bank_account.h"

//bank_account.cpp

void BankAccount::deposit(int amount)
{
	if (amount > 0)//checks to make sure you can't input a negative amount 
	{
		balance += amount;
	}
}

void BankAccount::withdraw(int amount)
{
	if (amount > 0 && amount <= balance) //can't withdrawl more money than you have
	{
		balance -= amount;
	}
}
