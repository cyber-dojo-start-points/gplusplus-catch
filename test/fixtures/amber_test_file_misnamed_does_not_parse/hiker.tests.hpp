// A test file named .hpp instead of .cpp, so it is never linked into the
// test binary and these tests never run. Vanishing is what it must not do:
// the makefile compiles every .hpp in its own right, so this one is seen
// even though it is not run.

#include "hiker.hpp"
#include <catch2/catch.hpp>
#include <string>

TEST_CASE("the answer is two digits long")
{
    REQUIRE( std::to_string(answer()).length() == 2 ;
}
