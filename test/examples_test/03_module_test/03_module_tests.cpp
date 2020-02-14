#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify pass_by_val_and_ref function")
{
	int num1 = 5, num2 = 10;

	pass_by_val_and_ref(num1, num2);

	REQUIRE(num1 == 5); //this stays 5 because it's not passing the memory address, just making a copy of it
	REQUIRE(num2 == 50); //this is 50 because it passes the actual memory address, no copy, the actual one
}