#include <iostream>
void printInfo(const std::string &name, const int &age);
int main()
{
    // const parameter = parameter that is effectively read-only
    //                                  conveys intent & code is more secure
    //                                  useful for pointers and references

    std::string name = "Mumuchim";
    int age = 23;

    printInfo(name, age);

    return 0;
}
void printInfo(const std::string &name, const int &age) // we added memory address here to be more secured hehe
{
    // name = "";
    // age = 0;
    std::cout << name << '\n';
    std::cout << age << '\n';
}
