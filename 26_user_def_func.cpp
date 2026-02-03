#include <iostream>

void happyBirthday(std::string name, int age); // you can place the function here or just declare like this
                                               // it should be before the main function

int main()
{
    // function = a block of reusable code

    std::string name;
    int age;

    std::cout << "What's your name? ";
    std::cin >> name;

    std::cout << "Which year you are born?: ";
    std::cin >> age;

    happyBirthday(name, age); // invoke the function
                              // variables inside parenthesis is called arguments
}

void happyBirthday(std::string name, int age) // variables inside parenthesis is called parameters;
{
    std::cout << "\n\nHappy Birthday to " << name << '\n';
    std::cout << "You belong to the zoo\n";
    std::cout << "Like a monkey like a monkey\n";
    std::cout << "The gorilla is you!\n\n";
    std::cout << "YOU ARE NOW: " << 2026 - age << " YEARS OLD!\n";
}