
#include <iostream>

template <typename T> // this is the template parameter declaration
T add(T x, T y)       // this is the function template definition for add<T>
{
    return x + y;
}

int main()
{
    std::cout << add(1, 2); // calls add(int, int)
    std::cout << '\n';
    std::cout << add(1.2, 3.4); // calls add(double, double)

    return 0;
}