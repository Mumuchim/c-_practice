#include <iostream>
template <typename T> // this is like auto but it is better to use in functions with parameters
                      // it's like a class but only for data types i think

T max(T x, T y) // only set to receive arguments of the same data type
{
    return (x > y) ? x : y;
}

template <typename J, typename K> // you can declare different templates if u want  different data types

auto max(J x, K y) // then use auto incase of return
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << max(1, 2) << '\n';
    std::cout << max(1.1, 2.2) << '\n';
    std::cout << max('1', '2') << '\n';
    std::cout << max(7, 9.11) << '\n'; // now you can return different data types with one template
    return 0;
}