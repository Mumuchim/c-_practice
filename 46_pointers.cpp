#include <iostream>

using std::cin;
using std::cout;
using std::string;

int main()
{

    // pointers = variable that stores a memory address of another variable
    //                    sometimes it's easier to work with an address

    // & address-of operator
    // * dereference operator

    string name = "Mumuchim";
    int age = 23;
    string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas; // if array, no need na gumamit ng memory address operator

    cout << *pName << '\n';
    cout << *pAge << '\n';
    cout << *pFreePizzas << '\n';
    cout << *pFreePizzas << '\n';
    cout << pFreePizzas[1] << '\n';     // array-style indexing
    cout << *(pFreePizzas + 2) << '\n'; // pointer arithmetic
    cout << "\nDISPLAY ALL USING FOR LOOP: " << '\n';

    for (int i = 0; i < 5; i++)
    {
        cout << pFreePizzas[i] << '\n';
    }

    return 0;
}