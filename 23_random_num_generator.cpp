#include <iostream>

int main()
{
    // pseudo-random = NOT truly random (but close)
    using std::cout;

    srand(time(NULL)); // seed random ???

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << num1 << '\n';
    cout << num2 << '\n';
    cout << num3;

    return 0; // exit
}