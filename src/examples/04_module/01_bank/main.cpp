#include "checking_account.h" //still works because we are extending bank_account in checking_account.h
#include "savings_account.h"
#include <iostream>
#include <vector>
#include <string>
#include <memory> //allows us to use unique_ptr

using std::cin; using std::cout;
using std::unique_ptr; using std::make_unique; //Allows us to create a unique pointer.

int main()
{
	/*
	//This is legacy code C++ 98
	SavingsAccount* sav = new SavingsAccount(500); //creates a pointer to savingsaccount type(STORED ON HEAP)
	//more code
	//DO NOT FORGET TO DO THESE THINGS, WILL CAUSE MEMORY LEAK
	delete sav; //releases memory
	sav = nullptr; //sets sav in memory to 0*/

	//Same example as above, C++ 11     aka smart pointers
	//unique pointers only have 1 parent, so these are owned by main

	unique_ptr<BankAccount> s = make_unique<SavingsAccount>(500); //creates dynamic memory for us 
	unique_ptr<BankAccount> c = make_unique<CheckingAccount>(100);

	std::vector<unique_ptr<BankAccount>> accounts{ std::move(s), std::move(c) }; //creates a vector of unique pointers to BankAccount
	//std::move transfers ownership from main to the vector

	for (auto& act : accounts)
	{
		cout << act->iGetBalance() << "\n"; //the -> points to the derived class functions
	}


	//SavingsAccount sNone; //creates a account with balance of 0
	//CheckingAccount checking; //without default constrcutor, this will not execute
	CheckingAccount checking(20);
	

	auto num{ 500 }; //automatically initializes num to 0 //THIS IS BEST PRACTICE

	//BankAccount a = 100; //This works, but doesn't want it allowed

	//std::vector<BankAccount> accounts{ BankAccount(100), BankAccount(200) }; //creates an array of accounts

//	std::vector<BankAccount> accountss{ s, checking }; //this is polymorphism, the BankAccount can hold sub classes

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