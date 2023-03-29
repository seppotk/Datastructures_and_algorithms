#include <iostream>

int max(int x, int y)
{
    return (x < y) ? y : x;
}

double max(double x, double y)
{
    return (x < y) ? y : x;
}

int main()
{
    std::cout << max(1, 2);
    std::cout << '\n';
    std::cout << max(1.2, 3.4);

    return 0;
}