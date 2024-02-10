#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else_if.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify the AND truth table")
{
	REQUIRE(get_and_result(true, true) == true);
	REQUIRE(get_and_result(true, false) == false);
	REQUIRE(get_and_result(false, true) == false);
	REQUIRE(get_and_result(false, false) == false);
}

TEST_CASE("Verify the OR truth table")
{
	REQUIRE(get_or_result(true, true) == true);
	REQUIRE(get_or_result(true, false) == true);
	REQUIRE(get_or_result(false, true) == true);
	REQUIRE(get_or_result(false, false) == false);
}

TEST_CASE("Verify the NOT operator")
{
	REQUIRE(get_not_result(true) == false);
	REQUIRE(get_not_result(false) == true);
}

TEST_CASE("Verify the boolean logic order of precedence")
{
	REQUIRE((!true && true || true) == true);
	REQUIRE((true || true && !true ) == true);
}

TEST_CASE("Verify the is even function")
{
	REQUIRE(is_even(2) == true);
	REQUIRE(is_even(3) == false);
	REQUIRE(is_even(999) == false);
	REQUIRE(is_even(1002) == true);
}

TEST_CASE("Verify the odd function")
{
	REQUIRE(is_odd(2) == false);
	REQUIRE(is_odd(3) == true);
	REQUIRE(is_odd(999) == true);
	REQUIRE(is_odd(1002) == false);
}

TEST_CASE("Verity is vowel function")
{
	REQUIRE(is_vowel('a') == true);
	REQUIRE(is_vowel('e') == true);
	REQUIRE(is_vowel('i') == true);
	REQUIRE(is_vowel('o') == true);
	REQUIRE(is_vowel('u') == true);

	REQUIRE(is_vowel('b') == false);
	REQUIRE(is_vowel('m') == false);
}

TEST_CASE("Verify the get generation function")
{
	REQUIRE(get_generation(2030) == "Invalid Year");
	REQUIRE(get_generation(2000) == "Centennial");
	REQUIRE(get_generation(1980) == "Millenial");
	REQUIRE(get_generation(1970) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby Boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
	REQUIRE(get_generation(1900) == "Invalid Year");
}

TEST_CASE("Test menu using the switch statement")
{
	REQUIRE(menu(0) == "Invalid Option");
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");
}