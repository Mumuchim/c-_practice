#include <iostream>

int main()
{
    using namespace std;

    string name = "ugh";

    int y = 1;

    // while (name.empty()){ // this will repeat until the conditions are met
    // while (1 == 1) // infinite loop

    cout << "How many licks do you want darling? ";
    cin >> y;

    while (y > 0)
    {
        cout << name << endl;
        y--;
    }
    cout << "Thank you baby :>";
}
