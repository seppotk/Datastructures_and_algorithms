#include <iostream>
#include <string>

int main()
{
    std::cout << "Please enter your first name and age\n";
    std::string first_name; // string variable
    int age;                // integer variable
    std::cin >> first_name; // read a string
    std::cin >> age;        // read an integer
    std::cout << "Hello, " << first_name << " (age " << age << ")\n";
}