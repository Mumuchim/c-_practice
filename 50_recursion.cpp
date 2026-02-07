#include <iostream>
int factorial(int num);
int main()
{

    std::cout << factorial(10);

    return 0;
}
int factorial(int num)
{
    if (num > 1)
    {
        return num * factorial(num - 1); // recursion is a function calling itself again like a narcisist
                                         // you need to stop him because if not it will cause stack overflow
    }
    else
    {
        return 1;
    }
}