#include <iostream>

int main()
{
    std::cout << "Hello C++20 " << std::endl;

    int age{21};
    std::cout << "Age: " << age << std::endl;

    std::cerr << "Error Message: something is wrong!" << std::endl;
    std::clog << "Log message : Something happened " << std::endl;
    return 0;
}