#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test class copy with stack variables")
{
	Vector v1(3);
	Vector v2 = v1;

	REQUIRE(v1.Size() == v2.Size());
}

TEST_CASE("Test class copy with dynamic memeory with heap varibales")
{
	Vector v1(3);
	Vector v2 = v1; //v2 points to v1 as a reference, this is also known as a class copy

	REQUIRE(v1.Size() == v2.Size());

	v1[1] = 5;

	REQUIRE(v1[1] != v2[1]);
	REQUIRE(v1[1] == 5);
	REQUIRE(v2[1] == 0);
}

TEST_CASE("Test class copy dynamic heap with 2 variables")
{
	Vector v1(2);
	Vector v2(3);

	//so basicaly v1 releases memory once it is down running leaving v2 to point to nothing thus causing an error
	v2 = v1; //will have v2 start pointing to v1, leaving memory on the heap unpointed(memory leak) and now we have 2 pointers pointing towards one mem location



	v1[1] = 5;

	REQUIRE(v1[1] == v2[2]);
}