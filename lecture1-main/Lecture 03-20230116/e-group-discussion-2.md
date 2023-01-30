# Group discussion 2

Discuss in Groups:

1. What's wrong with the following code?

```cpp
#include <iostream>

int main()
{
    unsigned int count{ 10 };

    // count from 10 down to 0
    while (count >= 0)
    {
        if (count == 0)
        {
            std::cout << "blastoff!";
        }
        else
        {
            std::cout << count << ' ';
        }
        --count;
    }

    std::cout << '\n';

    return 0;
}
```


2. Which naming convention is preferred for loop variables  
- iii, jjj, or kkk
- i, j, or k

3. What's wrong with the following code?

```cpp
#include <iostream>

int main()
{
    int count{ 1 };
    while (count <= 10)
    {
        std::cout << count << ' '; 
    }

    std::cout << '\n'; 

    return 0; 
}
```

4. The following program prints the letters a through z along with their ASCII codes. Explain ` static_cast<int>(myChar)` 

```cpp
#include <iostream>

int main()
{
    char myChar{ 'a' };
    while (myChar <= 'z')
    {
        std::cout << myChar << ' ' << static_cast<int>(myChar) << '\n';
        ++myChar;
    }

    return 0;
}
```

5. What is the difference between break and return in the following code?

```cpp
#include <iostream>

int breakOrReturn()
{
    while (true) 
    {
        std::cout << "Enter 'b' to break or 'r' to return: ";
        char ch{};
        std::cin >> ch;

        if (ch == 'b')
            break; 

        if (ch == 'r')
            return 1; 
    }


    std::cout << "We broke out of the loop\n";

    return 0;
}

int main()
{
    int returnValue{ breakOrReturn() };
    std::cout << "Function breakOrReturn returned " << returnValue << '\n';

    return 0;
}
```

## Links:
- [Learncpp.: 7.7, 7.10](https://www.learncpp.com/)

