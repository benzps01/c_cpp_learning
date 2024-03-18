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

    int age1;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;

    std::cin >> name >> age1;
    // std::cin >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old! " << std::endl;
    return 0;
}