#include <iostream>

int main()
{
    char ch{};
    std::cout << "Enter a letter:" << '\n';
    std::cin >> ch;
    std::cout << ch << " has value " << static_cast<int>(ch) << '\n';

    return 0;
}