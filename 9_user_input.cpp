#include <iostream>

// cout << (insertion operator)
// cin >> (extraction operator)

int main()
{
    std::string name;
    int num;

    std::cout << "Anong pangalan mo boiii?: ";
    std::getline(std::cin >> std::ws, name); // if there's space like full name Jerome_Isaac it will cause an error so we need this.
    std::cout << "Uy angas mo naman " << name << '\n';

    std::cout << "Naka ilang hits ka ngayong araw " << name << "? " << '\n';
    std::cin >> num;

    std::cout << "Ay wow grabe ka pala! lakas mo naka " << num << " ka ba naman! umay lods";

    return 0;
}