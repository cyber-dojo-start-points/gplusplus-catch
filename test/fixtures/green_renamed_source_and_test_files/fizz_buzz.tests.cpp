#include "fizz_buzz.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("life the universe and everything")
{
    REQUIRE( fizz_buzz() == 42 );
}
