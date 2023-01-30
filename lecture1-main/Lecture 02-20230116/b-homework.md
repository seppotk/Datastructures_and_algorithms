# Homework

Estimated workload is  about 105 min: 
- Part A: Videos - 55 min m(Max) 
- Part B: Reflection & Knowledge check - 50 min

## Part A: Video recording

> Please choose one option from the followings:.

- The first option is beginner friendly. We continue where we left off last week: From min 40 till 1:35 (About 55min)
https://youtu.be/vLnPwxZdW4Y
 
- The second  option is also beginner friendly, but digs deeper. We continue where we left off last week: From min 48 till 1:30 (About 42min)

https://youtu.be/_bYFu9mBnr4
 
The last option is 30 hour long, from Beginner to Advanced. 
We will go through Chapter 11 which starts at 14:13. Tomorrow, We will NOT cover the last sections:Pass by pointer and Pass by reference
https://www.youtube.com/watch?v=8jLOx1hD3_o

## Part B: Reflection & Knowledge check

1. In a function definition, what are the curly braces and statements in-between called?

2. Inspect the following program and state whether it will compile or not. What is the output in the former case.

```cpp
#include <iostream> 

void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "In doA()\n";

    doB();
}

int main()
{
    std::cout << "Starting main()\n";

    doA();
    doB();

    std::cout << "Ending main()\n";

    return 0;
}
```

3. Inspect the following program and state whether it will compile or not. What is the output in the former case.
```cpp
#include <iostream>

int return7()
{
    return 7;
}

int return9()
{
    return 9;
}

int main()
{
    return7();
    return9();

    return 0;
}
```

4. Inspect the following program and state whether it will compile or not. What is the output in the former case.

```cpp
#include <iostream>

int getNumbers()
{
    return 5;
    return 7;
}

int main()
{
    std::cout << getNumbers() << '\n';
    std::cout << getNumbers() << '\n';

    return 0;
}
```

5. Inspect the following program and state whether it will compile or not. What is the output in the former case.

```cpp
#include <iostream>

void printA()
{
    std::cout << "A\n";
}

int main()
{
    std::cout << printA() << '\n';

    return 0;
}
```

6. What is wrong with the following program?

```cpp
#include <iostream>

int multiply(int x, int y)
{
    int product{ x * y };
}

int main()
{
    std::cout << multiply(4) << '\n';
    return 0;
}
```

7. what is wrong with the following program?

```cpp
#include <iostream>
int add(int x, int y);

int main()
{
    std::cout << "3 + 4 + 5 = " << add(3, 4, 5) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}
```




