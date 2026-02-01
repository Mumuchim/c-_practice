#include <iostream>

int main()
{
    int mwah;

    std::cout << "HMMM? ILAN?: ";
    std::cin >> mwah;
    std::cout << '\n';

    for (int i = 1; i <= mwah; i++)
    // diba eto;       |       // pag reject gawin mo to
    // accepting condition;
    {
        std::cout << "MWAH\n"; // dadaan sya dito tapos babalik sa una ng for loop hanggang ma-accept
    }

    int count = 0;
    std::cout << "\nHMMM? ILAN ULIT?: ";
    std::cin >> count;

    for (int i = 1; i <= count; i++) // it only accepts true conditions and stops the loop if false.
    {
        std::cout << i << "\n";
    }
    // basically for loops is just while true statement
    return 0;
}