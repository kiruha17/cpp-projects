#include <iostream>

int getValueFromUser()
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;

    return num;
}

int main()
{
    int num1{ getValueFromUser() };
    int num2{ getValueFromUser() };
    
    std::cout << "The sum of those two numbers are " << num1 + num2 << ".\n";

    return 0;
}