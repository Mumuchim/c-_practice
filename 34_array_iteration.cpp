#include <iostream>

int main()
{
    std::string manaloto[] = {"Pepito", "Elsa", "Chito", "Clarissa"};

    for (int i = 0; i < sizeof(manaloto) / sizeof(std::string); i++)
    // with sizeof()/size(type) you can make automatic array displayer wow
    {
        std::cout << manaloto[i] << '\n';
    }

    char rarity[] = {'M', 'L', 'E', 'R', 'C'};

    for (int i = 0; i < sizeof(rarity) / sizeof(char); i++)

    {
        std::cout << rarity[i] << '\n';
    }

    return 0;
}
