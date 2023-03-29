#include <iostream>

template <typename T> // this is the template parameter declaration
T max(T x, T y)       // this is the function template definition for max<T>
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