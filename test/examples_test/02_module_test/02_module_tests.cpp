#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
	REQUIRE(bIsEven(2) == true);
	REQUIRE(bIsEven(4) == true);
	REQUIRE(bIsEven(5) == false);
}