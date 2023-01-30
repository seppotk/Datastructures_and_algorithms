# Group discussion 2

Discuss in Groups:

- Why use functions?
- How to use functions effectively? 
- What does the following program print?

```cpp
#include <iostream>

void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << "main: x = " << x << " y = " << y << '\n';

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;
}
```

## reference
- https://www.learncpp.com/cpp-tutorial/introduction-to-local-scope/
- https://www.learncpp.com/cpp-tutorial/why-functions-are-useful-and-how-to-use-them-effectively/

