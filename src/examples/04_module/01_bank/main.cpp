#include "bank_account.h"

#include <iostream>

int main()
{
	auto num{ 0 }; //automatically initializes num to 0 //THIS IS BEST PRACTICE

	std::cout << "Input Balance: ";
	std::cin >> num;

	BankAccount account{ num }; //creates the class object, uses the industry standard

	auto balance = account.iGetBalance(); //auto will give it balance an int type
	std::cout << "Balance is: " << balance;

	return 0;
}