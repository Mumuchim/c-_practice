#include <iostream>

struct Car
{
    std::string model;
    int year;
    std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2026;
    car1.color = "red";

   

    car2.model = "Camaro GT";
    car2.year = 2022;
    car2.color = "yellow";

    paintCar(car1, "black");

    printCar(car1);
    printCar(car2);

    return 0;
}

void printCar(Car &car) // as you notice we used Car as data type
{
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){
    car.color = color;
}