#include "hiker.hpp"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("life the universe and everything")
{
    REQUIRE( answer() == 42 );
}

TEST_CASE("the answer is not the question")
{
    REQUIRE( answer() != 6 * 9 );
}
