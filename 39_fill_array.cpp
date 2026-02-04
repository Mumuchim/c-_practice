#include <iostream>

int main()
{
    // fill() = Fills a range of elements with a specified value
    //            fill(begin, end, value)

    const int SIZE = 10;
    std::string foods[SIZE];

    fill(foods, foods + SIZE, "layer 1");
    fill(foods + 4, foods + 7, "layer 2");
    fill(foods + 8, foods + SIZE, "layer 3");

    for (std::string food : foods)
    {
        std::cout << food << '\n';
    }

    return 0;
}