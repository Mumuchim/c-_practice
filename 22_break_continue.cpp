#include <iostream>

int main()
{
    // break = break out of a loop
    // continue = skip current iteration

    // EXAMPLE:

    for (int i = 1; i <= 20; i++)
    {
        if (i == 13)
        {
            // break; // will stop at 12
            continue; // will skip 13
        }

        std::cout << i << '\n';
    }

    return 0; // exit
}