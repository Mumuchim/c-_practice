#include <iostream>

namespace first
{
    int x = 1; // entity x and an assignment.
}
namespace second
{
    int x = 2; // with same entity x and different assignment.
}

int main()
{
    using std::cout;   // THIS IS A TECHNIQUE TO LESSEN TYPINGS, but it can be "using namespace std" tho it is not recommended.
    using std::string; // the using command will cut down some of repetitions.

    int x = 0; // another same entity x but inside the main, this will be the default.

    string name = "Lilica"; // as you can see we're not typing std::cout again and again

    cout << "first namespace: " << first::x << '\n'; // same here there's no std::
    cout << "second namespace: " << second::x << '\n';
    cout << "default namespace: " << x << '\n';
    cout << name;

    return 0;
}