#include <iostream>

int main()
{

    // ternary operator ?: = replacement to an if/statement
    // condition ? expression1 : expression2;

    using std::cin;
    using std::cout;
    using std::string;

    int grade;
    cout << "What grade did you get? \n";
    cin >> grade;
    grade >= 75 ? cout << "You pass!" : cout << "You're a stupid motherfucker!"; // it's cool a one line yes or no.

    int number;
    cout << "\n\nOkay next... I will say if your number is ODD or EVEN.\nPlease type any fucking number: ";
    cin >> number;

    number % 2 == 1 ? cout << "ODD" : cout << "EVEN";

    cout << "\n\nANYWAYS ARE YOU HUNGRY??\ntype 1 or greater - YES\ntype 0 or any input - NO\nType your answer: ";
    bool hungry;

    cin >> hungry;

    hungry ? cout << "\nof course because you are a fat fuck gluttony incarnation. \n" : cout << "no? okay you're a normal not hungry person \n";

    return 0;
}