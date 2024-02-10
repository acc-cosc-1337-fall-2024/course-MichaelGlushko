#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"
#include "constants.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test implicit data type casting", "verify that ints are converted to doubles at runtime") {
	REQUIRE(convert_to_double(10, .5) == 5.0);
}

TEST_CASE("Test implicit data type casting double to int", "verify double to int conversion")
{
	REQUIRE(convert_double_to_int(10.99) == 10);
}

TEST_CASE("Test explicit data type casting")
{
	REQUIRE(static_cast_double_int(10.99) == 10);
}

TEST_CASE("Test constant values-get area of circle")
{
	REQUIRE(get_area_of_circle(10)==314.159);
}