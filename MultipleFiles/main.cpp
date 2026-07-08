#include <iostream>

int add(int x, int y);

int main()
{
    std::cout << add(1, 1) << '\n';

    int x{ 1 };
    std::cout << x << ' ';
    x += 2;
    std::cout << x << ' ';
    x += 3;
    std::cout << x << ' ';

    return 0;
}