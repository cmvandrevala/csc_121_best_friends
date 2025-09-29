#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/cat.hpp"

TEST_CASE( "#get_name" ) {
  Cat fluffly = Cat("Fluffly");
  REQUIRE( fluffly.get_name() == "Fluffly" );
}

