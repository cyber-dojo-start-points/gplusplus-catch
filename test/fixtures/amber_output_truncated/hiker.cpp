#include "hiker.hpp"
#include <iostream>

int answer()
{
    // The learner put a print inside a loop to see what was happening, and
    // it prints far more than the 50K the runner keeps.
    for (int i = 0; i != 5000; i++)
    {
        std::cout << "debug: answer was called, i is " << i << std::endl;
    }
    return 6 * 7;
}
