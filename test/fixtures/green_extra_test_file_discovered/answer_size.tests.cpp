#include "hiker.hpp"
#include <catch2/catch.hpp>
#include <string>

TEST_CASE("the answer is two digits long")
{
    REQUIRE( std::to_string(answer()).length() == 2 );
}
