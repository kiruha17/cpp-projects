#include <iostream>
#include "add.h"
#include "circle.h"
#include "growth.h"

int g_x {};
const int g_y { 1 };
constexpr int g_z { 2 };

namespace Foo
{
    int doSomething(int x, int y)
    {
        return x + y;
    }
    namespace Bar
    {
        void bar()
        {
            std::cout << "Bar\n";
        }
    }
}

namespace Goo
{
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

void print()
{
    std::cout << " there\n";
}

namespace Hello
{
    void print()
    {
        std::cout << "Hello";
    }

    void printHelloThere()
    {
        print();
        ::print();
    }
}

int main()
{
    std::cout << Foo::doSomething(4, 3);
    Hello::print();
    ::print();
    Hello::printHelloThere();
    std::cout << BasicMath::add(4, 3) << '\n';
    std::cout << BasicMath::pi << '\n';
    std::cout << BasicMath::e << '\n';
    Foo::Bar::bar();

    return 0;
}