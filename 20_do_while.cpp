#include <iostream>

int main()
{
    // do while loop = do some block of code first,
    //                 THEN repeat again if condition is true

    int number = 0;
    int attempts = 0;
    const int max_attempts = 5;

    std::string password = "mumuchim";
    std::string input;

    do
    {
        std::cout << "Enter a positive #: ";
        std::cin >> number;
    } while (number < 0);

    std::cout << "The # is : " << number << '\n';

    do
    {
        std::cout << "\nEnter the password: ";
        std::cin >> input;
        attempts++; // 3

        if (input != password)
        {
            std::cout << "\nPlease try again...\n";
        }

        if (input != password)
        {
            std::cout << "Attempts left: " << max_attempts - attempts << '\n';
        }

        if (max_attempts == attempts) //
        {
            std::cout << "\nAccess denied. HACKER KA BOIII???\n";
            return 0; // exit program
        }

    } while (input != password);

    std::cout << "\nYOU ARE NOW LOGGED IN.\n";

    return 0;
}