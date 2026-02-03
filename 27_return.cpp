#include <iostream>

// Function to check if age is 18 or over

bool isAdult(int age); // declare the function
std::string concatString(std::string string1, std::string string2);
double square(double length);
double cube(double length);

int main()
{
    int age = 0;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (isAdult(age))
    {
        std::cout << "You are an adult" << std::endl;
    }
    else
    {
        std::cout << "You are a child" << std::endl;
    }

    // ******************* EXAMPLE 2 ******************* //

    std::cout << "\nOKAY NEXT QUESTION\n";
    std::string firstName;
    std::string lastName;

    std::cout << "What is your first name?\n";
    std::cin >> firstName;
    std::cout << "What is your last name? \n";
    std::cin >> lastName;

    std::string fullName = concatString(firstName, lastName);

    std::cout << "\nHello " << fullName << '\n';

    // ******************* EXAMPLE 2 ******************* //

    std::cout << "\nUHM.. here's an example of SQUARE and CUBE multiplier\n";

    double length = 0;
    std::cout << "Give me a length of a line: ";
    std::cin >> length;

    double area = square(length);
    double volume = cube(length);

    std::cout << "\nArea: " << area << "cm^2\n";
    std::cout << "Volume: " << volume << "cm^3\n";

    return 0;
}

bool isAdult(int age) // defined the function
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}

std::string concatString(std::string string1, std::string string2)
{
    return string1 + " " + string2;
}

double square(double length)
{
    return length * length;
}
double cube(double length)
{
    return length * length * length;
}