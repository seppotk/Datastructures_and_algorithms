#include <iostream>
#include <string>
using namespace std;
// #include <stdio.h>

 
// Optimized recursive solution to calculate `pow(x, n)`
// using divide-and-conquer
long power(int x, unsigned n)
{
    // base condition
    if (n == 0) {
        return 1L;
    }
 
    // calculate subproblem recursively
    int pow = power(x, n / 2);
 
    if (n & 1) { // if `y` is odd
        return x * pow * pow;
    }
 
    // otherwise, `y` is even
    return pow * pow;
}
 
int main(void)
{
    int x = -2;
    unsigned n = 10;
 
    // printf("pow(%d, %d) = %d", x, n, power(x, n));
    cout<<"pow("<<x << ", " <<n<<")= " <<power(x, n);
 
    return 0;
}