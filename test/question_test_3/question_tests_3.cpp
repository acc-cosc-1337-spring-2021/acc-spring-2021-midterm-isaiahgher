#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Transcript dna into rna") {
	REQUIRE('GATGGAACTTGACTACGTAAATT',transcribe_dna_into_rna::to_rna('GAUGGAACUUGACUACGUAAAUU'));
}

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
