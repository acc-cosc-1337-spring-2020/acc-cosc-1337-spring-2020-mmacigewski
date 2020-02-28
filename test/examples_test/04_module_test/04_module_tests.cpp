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

	REQUIRE_THROWS_AS(account.deposit(-50), Invalid);//this test it for an error!!
	REQUIRE(account.iGetBalance() == 550);
}

TEST_CASE("Test Withdraw function") //if we edit function the test cases should appear green
{
	BankAccount account(500);

	REQUIRE(account.iGetBalance() == 500);

	account.withdraw(50);
	REQUIRE(account.iGetBalance() == 450);

	account.withdraw(150);
	REQUIRE(account.iGetBalance() == 300);

	REQUIRE_THROWS_AS(account.withdraw(800), Invalid);

	REQUIRE_THROWS_AS(account.withdraw(-1), Invalid);
	REQUIRE(account.iGetBalance() == 300);

}