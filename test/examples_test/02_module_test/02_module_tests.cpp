#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test is even function")
{
	REQUIRE(bIsEven(2) == true);
	REQUIRE(bIsEven(4) == true);
	REQUIRE(bIsEven(5) == false);
}

TEST_CASE("Test Get Generation function")
{
	REQUIRE(sGetGeneration(1965) == "Generation X");
	REQUIRE(sGetGeneration(1954) == "Baby boomer");
	REQUIRE(sGetGeneration(2010) == "Centenial");
	REQUIRE(sGetGeneration(1989) == "Millenial");
	REQUIRE(sGetGeneration(1935) == "Silent Generation");
	REQUIRE(sGetGeneration(1600) == "Invalid Year");
}

TEST_CASE("Test sMenu function")
{
	REQUIRE(sMenu(1) == "Option 1");
	REQUIRE(sMenu(2) == "Option 2");
	REQUIRE(sMenu(3) == "Option 3");
	REQUIRE(sMenu(4) == "Option 4");
	REQUIRE(sMenu(6) == "Invalid Option");
}