#include <iostream>

int main()
{
    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // ! = reverses the logical state of its operand

    using std::cin;
    using std::cout;
    using std::string;

    int temp;

    cout << "Enter the temperature: ";
    cin >> temp;

    if (temp > 18 && temp < 36)
    {
        cout << "The temperature is good!";
    }
    else
    {
        cout << "The temperature is bad!";
    }

    string x;

    cout << "\n\nPLEASE enter letter A or B: \n";
    cin >> x;
    if (x == "A" || x == "B")
    {
        cout << "\nThank you";
    }
    else
    {
        cout << "\nFucking idiot.";
    }

    bool sunny;

    cout << "\n\nIs it sunny outside?";
    cin >> sunny;

    if (!sunny)
    {
        cout << "it is cloudy outside!";
    }
    else
    {
        cout << "it is sunny outside";
    }

    return 0;
}