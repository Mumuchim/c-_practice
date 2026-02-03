#include <iostream>

using std::cin;
using std::cout;

int main()
{
    // array = a data structure that can store multiple values
    //        values are accessed by an index number
    //        "kind of like a variable that can hold multiple values"

    std::string cars[3];

    cars[0] = "\nRaider";
    cars[1] = "Grom";
    cars[2] = "Giorno\n";

    cout << cars[0] << '\n';
    cout << cars[1] << '\n';
    cout << cars[2] << '\n';

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    cout << prices[0] << '\n';
    cout << prices[1] << '\n';
    cout << prices[2] << '\n';
    cout << prices[3] << '\n';

    return 0;
}