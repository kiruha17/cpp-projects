// DON'T ACTUALLY USE THIS LMAOOOOOOO

#include <iostream>

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << (++x, ++y) << '\n'; // increment both, returns 2nd

    return 0;
}