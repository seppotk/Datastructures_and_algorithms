
# Pair programming 1

> Please locate your breakout-room in the Excel sheet: `1-pair-programming.xls`

1. Last week, you wrote a program that performs as a very simple calculator. Compare your code with the following program and write down your reflection. 

```cpp
#include <iostream>

int calculate(int x, int y, char op)
{
    switch (op)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            std::cerr << "calculate(): Unhandled case\n";
            return 0;
    }
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;

    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char op{};
    std::cin >> op;

    std::cout << x << ' ' << op << ' ' << y << " is " << calculate(x, y, op) << '\n';

    return 0;
}
```

2. There are 2 opinions concerning the use of `goto` statements
- [Linus'](https://lkml.org/lkml/2003/1/12/126)
- [Edsger W. Dijkstra](https://www.cs.utexas.edu/users/EWD/ewd02xx/EWD215.PDF)

## Links
- [Learncpp: 7.5-7.6](https://www.learncpp.com/)

