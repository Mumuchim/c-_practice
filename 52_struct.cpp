#include <iostream>

// this groups related variables under one name
// it can contain different data types
// variables in a struct are known as "members"
// members can be accessed with dot operator .

struct student
{
    std::string name;
    double gpa;
    bool enrolled = true; // you can change default value
};

int main()
{

    student student1;
    student1.name = "Spongebob";
    student1.gpa = 3.2;
    // here i didn't define if he's enrolled

    student student2;
    student2.name = "Patrick";
    student2.gpa = 2.1;
    student2.enrolled = true;

    student student3;
    student3.name = "Squidward";
    student3.gpa = 1.5;
    student3.enrolled = false;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n'; // this will throw the default value

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}