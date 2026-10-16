// A test file named .hpp instead of .cpp. The makefile compiles every .hpp
// in its own right, so this file is checked for errors, but only .cpp files
// are linked into the test binary, so these tests never run. The assertion
// here is one that would fail, so a green says this file really did not run
// rather than that it ran and passed.

#include "hiker.hpp"
#include <catch2/catch_test_macros.hpp>
#include <string>

TEST_CASE("the answer is three digits long")
{
    REQUIRE( std::to_string(answer()).length() == 3 );
}
