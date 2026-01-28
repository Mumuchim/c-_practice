#include <iostream>

int main()
{
    using std::cout;

    // arithmetic operators = return the result of a specific arithmetic operation (+ - * /)

    int students = 20;
    int deaths = 10;
    int alive = students - deaths;
    int remainder = students % 2;   // modulo operator that gives remainder result
    int test = 6 - (5 + 4) * 3 / 2; // this follows PEMDAS

    // students = student + 2; // will result 22
    // students+=2; // another method also do +2 so 22
    // students++; // this is called "increment" and will just add 1

    cout << "students: " << students << '\n';
    cout << "deaths: " << deaths << '\n';
    cout << "alive: " << alive << '\n';
    cout << "modulo operator: " << remainder << '\n';
    cout << "test " << test << '\n';

    // students = students -2; // do the same as
    // students-=2;
    // students--; // dicrement by 1

    // this will do the same with * and /

    return 0;
}