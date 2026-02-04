#include <iostream>

double userInput(int input, int input2);

int main()
{
    int input = 0;
    std::cout << "Please type any number: ";
    std::cin >> input;

    int input2 = 0;
    double result = userInput(input, input2);

    return 0;
}

double userInput(int input, int input2)
{
    std::cout << "Please type any number again: ";
    std::cin >> input2;

    double fake = 1 + input + input2; // TRIP KO LANG MAG CODE FROM SCRATCH NG WALANG KWENTANG BAGAY ;-;
    std::cout << fake;

    return fake;
}
