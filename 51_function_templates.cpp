#include <iostream>
template <typename T> // this is like auto but it is better to use in functions with parameters
                      // it's like a class but only for data types i think
T max(T x, T y)
{
    return (x > y) ? x : y;
}
int main()
{
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.2) << '\n';
    std::cout << max('1', '2') << '\n';

    return 0;
}