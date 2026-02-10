#include <iostream>

class Stove
{
private:
    int temperature = 0; // private, cannot modify in int without getters and setters

public:
    int getTemperature() // if you wanna fetch a private class value
    {
        return temperature;
    }
    void setTemperature(int temperature) // if you wanna modify a private class value, but with conditions
    {
        if (temperature < 0)
        {
            this->temperature = 0;
        }
        else if (temperature >= 10)
        {
            this->temperature = 10;
        }
        else
        {
            this->temperature = temperature;
        }
    }
};

int main()
{

    Stove stove;

    stove.setTemperature(5);

    std::cout << "The temperature setting is: " << stove.getTemperature();

    return 0;
}