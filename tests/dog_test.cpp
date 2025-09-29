#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/cat.hpp"
#include "../src/dog.hpp"

TEST_CASE( "ensure that cat is connected to dog" ) {
  Cat fluffly = Cat("Fluffly");
  Dog cinnamon = Dog("Cinnamon", &fluffly);
  REQUIRE( cinnamon.best_friend->get_name() == "Fluffly" );
}

