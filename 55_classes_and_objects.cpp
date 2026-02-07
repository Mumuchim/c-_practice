#include <iostream>

// object = A collection of ATTRIBUTES - dog can have names, breed, sex
// and METHODS - dogs can bark, jump, eat, bite
// they can have characteristics and could perform actions
// can be used to mimic real world times (ex. Phone, Book, Dog)
// Created from a class which acts as a "blue-print"

class Human
{
public:
    std::string name;
    std::string occupation = "Human";
    int age;

    void eat()
    {
        std::cout << "This person is eating\n";
    }
    void drink()
    {
        std::cout << "This person is drinking\n";
    }
    void code()
    {
        std::cout << "This person is fuc++ing\n";
    }
};

class Car
{
public:
    std::string make;
    std::string model;
    int year;
    std::string color;

    void accelerate()
    {
        std::cout << "You step on the gas!\n";
    }
    void brake()
    {
        std::cout << "You step on the breaks!\n";
    }
};

int main()
{

    Human human1;
    Human human2;

    human1.name = "Borgi";
    human1.age = 23;

    human2.name = "Mumuchim";
    human2.occupation = "Terrorist";
    human2.age = 24;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';
    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';

    human1.eat();
    human1.drink();
    human1.code();

    Car car1;

    car1.make = "Bugatti";
    car1.model = "Tourbillon";
    car1.year = 2026;
    car1.color = "black";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';

    car1.accelerate();
    car1.brake();

    return 0;
}