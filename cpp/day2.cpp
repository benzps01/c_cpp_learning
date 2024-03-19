#include <iostream>
#include <string>

int main()
{
    /*
    std::cout << "Hello C++20 " << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error Message: something is wrong!" << std::endl;
    std::clog << "Log message : Something happened " << std::endl;
    */

    // Data input
    /*
     int age1;
     std::string name;

     std::cout << "Please type your name and age: " << std::endl;

     std::cin >> name >> age1;
     // std::cin >> age1;

     std::cout << "Hello " << name << " you are " << age1 << " years old! " << std::endl;
     return 0;
     */

    // Data with spaces
    std::string full_name;
    int age3;

    std::cout << "Please type in your full name and age " << std::endl;

    std::getline(std::cin, full_name); // gets data from the line even if it has spaces....

    std::cin >> age3;

    std::cout << "Hello " << full_name << " you are " << age3 << " years old! " << std::endl;

    return 0;
}