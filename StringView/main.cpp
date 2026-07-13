#include <iostream>
#include <string_view>

void printSV(std::string_view str)
{
    std::cout << str << '\n';
}

int main()
{
    std::string_view s{ "Hello, world !" };
    printSV(s);
    printSV("Hello, world!");
    std::string s2{ "Hello, world!" };
    printSV(s2);

    // Converstions
    std::string_view sv{ "Hello, world!" };
    std::string s3{ sv };
    std::string s4 = static_cast<std::string>(sv);

    return 0;
}