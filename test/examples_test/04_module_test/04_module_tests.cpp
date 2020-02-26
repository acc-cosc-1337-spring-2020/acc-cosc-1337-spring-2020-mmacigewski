#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test BankAccount Constructor")
{
	BankAccount account(500);

	REQUIRE(account.iGetBalance() == 500);
}

TEST_CASE("Test Deposit function")
{
	BankAccount account(500);
	REQUIRE(account.iGetBalance() == 500); //TO CHECK

	account.deposit(50);

	REQUIRE(account.iGetBalance() == 550);

	account.deposit(-50);

	REQUIRE(account.iGetBalance() == 550);
}

TEST_CASE("Test Withdraw function")
{
	BankAccount account(500);

	REQUIRE(account.iGetBalance() == 500);

	account.withdraw(50);

	REQUIRE(account.iGetBalance() == 450);

	account.withdraw(150);

	REQUIRE(account.iGetBalance() == 300);

	account.withdraw(-1);

	REQUIRE(account.iGetBalance() == 300);

	account.withdraw(400000);

	REQUIRE(account.iGetBalance() == 300);
}