#include "checking_account.h" //still works because we are extending bank_account in checking_account.h

#include <iostream>
#include <vector>
#include <string>

using std::cin; using std::cout;

int main()
{
	CheckingAccount checking;
	//CheckingAccount checking(50);
	

	auto num{ 500 }; //automatically initializes num to 0 //THIS IS BEST PRACTICE
	auto balance{ 0 };

	//BankAccount a = 100; //This works, but doesn't want it allowed

	std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) }; //creates an array of accounts

	BankAccount account{ num }; //creates the class object, uses the industry standard, explicitley calls it

	display_balance(account);
	cin >> account;
	cout << account; //this is operator overloading

	auto amount{ 0 };
	cout << "\nEnter deposit amount: ";
	cin >> amount;

	try
	{
		account.deposit(amount);
	}
	catch (Invalid e) //will create the object with the invalid class and print out the error
	{
		cout << e.get_error();
	}

	cout << "Balance is: " << account.iGetBalance();

	cout << "\nEnter withdraw amount: ";
	cin >> amount;

	try
	{
		account.withdraw(amount);
	}
	catch(Invalid d)
	{
		cout << d.get_error();
	}

	return 0;
}