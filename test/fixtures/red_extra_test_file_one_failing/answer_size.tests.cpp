#include "hiker.hpp"
#include <catch2/catch_test_macros.hpp>
#include <string>

TEST_CASE("the answer is three digits long")
{
    REQUIRE( std::to_string(answer()).length() == 3 );
}
