#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h" 
#include "checking_account.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*TEST_CASE("Test BankAccount Constructor")
{
	BankAccount *account(500);

	REQUIRE(account->iGetBalance() == 500);
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

	REQUIRE_THROWS_AS(account.withdraw(800), Invalid);

	REQUIRE_THROWS_AS(account.withdraw(-1), Invalid);
	REQUIRE(account.iGetBalance() == 450);

}

TEST_CASE("Test Bank acc default constructor balance 0")
{
	BankAccount account;

	REQUIRE(account.iGetBalance() == 0);
}

TEST_CASE("Test bank account initial open deposit >= 25")
{
	BankAccount account;

	REQUIRE(account.iGetBalance() == 0);

	account.open(25);
	REQUIRE(account.iGetBalance() == 25);

}

TEST_CASE("Test bank account initial open deposit <= 25")
{
	BankAccount account;

	REQUIRE(account.iGetBalance() == 0);


	REQUIRE_THROWS_AS(account.open(5), Invalid);

}

TEST_CASE("Test BankAccount static rate initialization")
{
	BankAccount account;

	REQUIRE(account.getRate() == 0.025);
}

TEST_CASE("Test Checking account Constructor")
{
	CheckingAccount account(500);

	REQUIRE(account.iGetBalance() == 512); //different than BankAccount iGetBalance due to function being overidden
}

TEST_CASE("Test Checkingaccount get balance")
{
	CheckingAccount account(150);

	REQUIRE(account.iGetBalance() == 153); //different than BankAccount iGetBalance due to function being overidden
}
*/
