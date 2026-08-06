#include <iostream>

int main()
{
    constexpr int x{ 7 };
    constexpr int y{ 4 };

    std::cout << "int / int is: " << x / y << '\n';
    std::cout << "double / int is: " << static_cast<double>(x) / y << '\n';
    std::cout << "int / double is: " << x / static_cast<double>(y) << '\n';
    std::cout << "double / double is: " << static_cast<double>(x) /
        static_cast<double>(y) << '\n';

    return 0;
}