#include "hiker.hpp"
#include <cstdlib>

int answer()
{
    return 6 * 9;
}

int checksum()
{
    // The learner is bailing out of a case they have not worked out yet.
    // This ends the process, so the tests after it never run and Catch
    // never gets to print its summary.
    std::exit(1);
}
