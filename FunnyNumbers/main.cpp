#include <iomanip>
#include <iostream>

int main()
{
    std::cout << std::setprecision(17);

    double d1{ 1.0 };
    std::cout << d1 << '\n';

    double d2{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };
    std::cout << d2 << '\n';

    double zero { 0.0 };
    double posinf { 5.0 / zero }; // positive infinity
    std::cout << posinf << '\n';
    double neginf { -5.0 / zero }; // negative infinity
    std::cout << neginf << '\n';
    double z1 { 0.0 / posinf }; // positive zero
    std::cout << z1 << '\n';
    double z2 { -0.0 / posinf }; // negative zero
    std::cout << z2 << '\n';
    double nan { zero / zero }; // NaN
    std::cout << nan << '\n';

    return 0;
}