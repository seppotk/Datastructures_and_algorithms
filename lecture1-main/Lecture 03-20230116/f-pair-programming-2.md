
# Pair programming 2

> Please locate your breakout-room in the Excel sheet: `1-pair-programming.xls`

1. Explain how this program works

```cpp
#include <iostream>

int main()
{
    int x{ 1 };
    int& ref{ x };

    std::cout << x << ref << '\n';

    int y{ 2 };
    ref = y;
    y = 3;

    std::cout << x << ref << '\n';

    x = 4;

    std::cout << x << ref << '\n';

    return 0;
}
```

2. Why should we set pointers that aren’t pointing to a valid object to ‘nullptr’?



3. Why should you favor references over pointers whenever possible?

## Links
- [Learncpp: 9.3, 9.7](https://www.learncpp.com/)

