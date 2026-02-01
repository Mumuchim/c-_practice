#include <iostream>

int main()
{
    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases

    using std::cin;
    using std::cout;

    int month;
    cout << "Enter the month (1-12): ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "It is January";
        break;
    case 2:
        cout << "It is February";
        break;
    case 3:
        cout << "It is March";
        break;
    case 4:
        cout << "It is April";
        break;
    case 5:
        cout << "It is May";
        break;
    case 6:
        cout << "It is June";
        break;
    case 7:
        cout << "It is July";
        break;
    case 8:
        cout << "It is August";
        break;
    case 9:
        cout << "It is September";
        break;
    case 10:
        cout << "It is October";
        break;
    case 11:
        cout << "It is November";
        break;
    case 12:
        cout << "It is December";
        break;
    default: // if no matches the cases, you can put error message here or any.
        cout << "Please enter in only numbers (1-12) \n you fucking piece of shit with no common sense.";
    }

    char grade;

    cout << "\n(From A-F ) What letter is your grade?: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "You did great!";
        break;
    case 'B':
        cout << "You're better than a peanut brain.";
        break;
    case 'C':
        cout << "Ermm understandable for a peanut brain.";
        break;
    case 'D':
        cout << "You're a fucking noob fuck.";
        break;
    case 'F':
        cout << "WHAT THE FUCK MAN? indians IQ are better than you. \n DYING IS AN OPTION BTW";
        break;
    default:
        cout << "Please only enter in a letter grade (A-F).";
    }

    return 0;
}