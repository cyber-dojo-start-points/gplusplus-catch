#include "hiker.hpp"
#include <catch2/catch.hpp>
#include <string>

TEST_CASE("life the universe and everything")
{
    REQUIRE( answer() == 42 );
}

TEST_CASE("the answer is two digits long")
{
    REQUIRE( std::to_string(answer()).length() == 2 );
}

TEST_CASE("the answer is not the question")
{
    REQUIRE( answer() != 6 * 9 );
}
