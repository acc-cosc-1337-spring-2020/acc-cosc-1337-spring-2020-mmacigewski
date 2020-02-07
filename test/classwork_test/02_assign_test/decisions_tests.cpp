#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "loops.h"
#include "decision.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing gross_pay function")
{
	REQUIRE(gross_pay(20, 10) == 200); //REG PAY
	REQUIRE(gross_pay(30, 10) == 300); //REG PAY
	REQUIRE(gross_pay(25, 10) == 250); //REG PAY
	REQUIRE(gross_pay(50, 10) == 550); //OT PAY
	REQUIRE(gross_pay(50, 30) == 1650); //OT PAY
	REQUIRE(gross_pay(50, 21) == 1155); //OT PAY
}