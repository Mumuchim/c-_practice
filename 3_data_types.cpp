#include <iostream>

int main()
{
    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimal)
    double price = 10.92229;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    char initial = 'A';
    char grade = 'B';

    // boolean (true or false)
    bool student = true;
    bool passed = false;

    // string (objects that represents a sequence of text)
    std::string boy = "Jerome Isaac";
    std::string girl = "Aika Katrina";

    std::cout << "DATA TYPES" << '\n';
    std::cout << "int: " << age << '\n';
    std::cout << "double: " << price << '\n';
    std::cout << "char: " << initial << " or " << grade << '\n';
    std::cout << "boolean: " << student << " or " << passed << '\n';
    std::cout << "strings: " << girl << '\n';

    return 0;
}