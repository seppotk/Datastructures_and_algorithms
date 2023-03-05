#include <iostream>
using namespace std;

int number_of_paths(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;

    return number_of_paths(n - 1) + number_of_paths(n - 2);
}

int main()
{

    cout << "number of paths =  " << number_of_paths(4);
    return 0;
}
