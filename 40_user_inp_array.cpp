#include <iostream>

int main()
{
    std::string foods[5];                        // dineclare yung array foods // we cannot change it with std::cin
    int size = sizeof(foods) / sizeof(foods[0]); // dineclare kung ilan yung inputed na size ng foods array
    std::string temp;

    for (int i = 0; i < size; i++) // so eto for loops sya
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": "; // neto hanggang mag reach sa size // dahil i = 0, then i = 1 hanggang mag 0-4; edi nag input tayo sa lahat ng array nya
        std::getline(std::cin, temp);
        if (temp == "q") // imbis na rekta sa array gumamit tayo ng temp para di visible sa array yung 'q' pag naprint
        {
            break;
        }
        else
        {
            foods[i] = temp; // possible gumamit ng default na true value angas
        }
    }

    std::cout << "You like the following food:\n";

    for (int i = 0; !foods[i].empty(); i++) // for display, while hindi empty, go print
    {
        std::cout << foods[i];
    }

    return 0;
}