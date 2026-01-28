#include <iostream>

int main()
{
    using std::cout;

    // type conversion = conversion a value of one data type to another
    // implicit = automatic

    int int_x = 3.14;
    double double_x = 3.14;

    // explicit = precede value with new data type (int)
    double y = (int)3.14; // you can also do this but idk why

    cout << "implicit int version: " << int_x << '\n';
    cout << "implicit double version: " << double_x << '\n';
    cout << "explicit double version: " << y << '\n';

    char z = 106;

    cout << "example 1: " << z << '\n';

    int correct = 80;
    int questions = 100;
    double score = (double)correct / questions * 100;

    cout << "example 2: " << score << "%" << '\n';

    cout << "ASCII name: " << (char)74 << (char)101 << (char)114 << (char)111 << (char)109 << (char)101;

    return 0;
}