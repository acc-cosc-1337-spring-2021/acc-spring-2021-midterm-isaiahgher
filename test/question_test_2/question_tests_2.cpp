#include "catch.hpp"
#include "question2.h"

TEST_CASE("Call by value parameter", "a copy of value is sent to its function"){
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	
	REQUIRE(num1 == 5);
}

TEST_CASE("Call by reference parameter", "a copy of value is sent to its function"){
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	
	REQUIRE(num2 == 50);
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
