#include <iostream>

void printFun(int test)
{
    if (test < 1)
        return;
    else
    {
        std::cout << test << " ";
        printFun(test - 1); // statement 2
        std::cout << test << " ";
        return;
    }
}

int main()
{
    int test = 3;
    printFun(test);
}