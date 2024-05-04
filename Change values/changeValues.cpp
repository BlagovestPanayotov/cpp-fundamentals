#include <iostream>

int main()
{
    int a = 7;
    int b = 3;

    a = a + b;
    b = a - b;
    a = a - b;

    std::cout << a;
    std::cout << b;

    return 0;
}
