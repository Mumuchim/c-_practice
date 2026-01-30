#include <iostream>

int main()
{

    // if statements = do something if a condition is true.
    //                if not, then don't do it.

    using std::cin;
    using std::cout;

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age >= 100)
    {
        cout << "You are too old to enter this site!";
    }

    else if (age >= 18)
    {
        cout << "Welcome to the site!";
    }

    else if (age <= 0)
    {
        cout << "You haven't been born yet!";
    }

    else
    {
        cout << "Your are not old enough to enter!";
    }

    return 0;
}