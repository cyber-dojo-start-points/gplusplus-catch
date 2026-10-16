// A learner who puts a test file in a sub-directory gets it compiled and
// run like any other. The count in expected.json is what says so: two test
// cases rather than one.

#include "hiker.hpp"
#include <catch2/catch_test_macros.hpp>
#include <string>

TEST_CASE("the answer is two digits long")
{
    REQUIRE( std::to_string(answer()).length() == 2 );
}
