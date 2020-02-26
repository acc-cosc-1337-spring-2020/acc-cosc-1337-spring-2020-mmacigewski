#include "bank_account.h"

#include <iostream>

using std::cin; using std::cout;

int main()
{
	auto num{ 0 }; //automatically initializes num to 0 //THIS IS BEST PRACTICE

	BankAccount account{ num }; //creates the class object, uses the industry standard

	auto balance = account.iGetBalance(); //auto will give it balance an int type
	cout << "Balance is: " << balance;

	auto amount{ 0 };
	cout << "Enter deposit amount: ";
	cin >> amount;

	cout << "Balance is: " << balance;

	return 0;
}