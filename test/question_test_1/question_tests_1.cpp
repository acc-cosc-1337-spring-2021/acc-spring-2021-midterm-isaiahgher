#include "catch.hpp"
#include "question1.h"

TEST_CASE("Decimal to Binary"){
	REQUIRE(decimal_to_binary(10)==00001010);
	REQUIRE(decimal_to_binary(170)==10101010);
	REQUIRE(decimal_to_binary(225)==11111111);
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
