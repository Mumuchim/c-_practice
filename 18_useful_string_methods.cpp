#include <iostream>

int main()
{
    using std::cin;
    using std::cout;
    using std::string;

    string name;

    cout << "Enter your name: ";
    std::getline(std::cin, name);

    if (name.length() > 12) // checks the length
    {
        cout << "Name can only be 12 characters";
    }
    else if (name.empty()) // checks if empty
    {
        cout << "You didn't type anything :<";
    }
    else if (name.find('0') != string::npos || // finds something in a string, i don't understand why not equal npos, just used AI in here
             name.find('1') != string::npos ||
             name.find('2') != string::npos ||
             name.find('3') != string::npos ||
             name.find('4') != string::npos ||
             name.find('5') != string::npos ||
             name.find('6') != string::npos ||
             name.find('7') != string::npos ||
             name.find('8') != string::npos ||
             name.find('9') != string::npos)
    {
        name.clear();
        cout << "Sorry numbers are not allowed to be in names.";
    }
    else
    {
        name.insert(0, "@"); // inserts characters in a string
        cout << "Welcome " << name.append("-sama");
    }

    // special mention
    //  .at // tells order of your characters
    //  .erase // erase specific characters in an specific order

    return 0;
}