#include <iostream>

void swap(std::string &x, std::string &y);

int main()
{
    std::string x = "Kool-Aid";
    std::string y = "Water";

    swap(x, y); // invoke swap function

    std::cout << "X: " << x << '\n';
    std::cout << "Y: " << y << '\n';

    return 0;
}
void swap(std::string &x, std::string &y)
{ // pass by reference is better as it modifies the original
    std::string temp;
    temp = x; // will hold "Kool-Aid"
    x = y;    // will steal y value so now x is "Water"
    y = temp; // y is now empty so we will give it the temp "Kool-Aid"
    // as a result it will swap
}