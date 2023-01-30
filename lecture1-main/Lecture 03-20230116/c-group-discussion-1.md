# Group discussion 1

Discuss in Groups:

1. Why the following code does not compile:

```cpp
#include <iostream>

int main()
{
    if (true)
    {
        int x{ 5 };
    } 
    else
    {
        int x{ 6 };
    } 

    std::cout << x << '\n'; 

    return 0;
}
```

2. What's wrong with the following snippet?

```cpp
if (codesActivated());
    doSomething();
```

3.  What's wrong with the following snippet?

```cpp
#include <iostream>

int main()
{
    std::cout << "Enter 0 or 1: ";
    int x{};
    std::cin >> x;
    if (x = 0) 
        std::cout << "You entered 0";
    else
        std::cout << "You entered 1";

    return 0;
}
```

4. Why switch statements are preferred over if-else chains (when there is a choice) ?

5.  What's wrong with the following snippet?

```cpp
switch (x)
{
    case 54:
    case 54:  
    case '6': 
}
```
6. How do you indicate intentional fall-through in switch statements .

7. Extra: Why does the switch type only allow for integral (or enumerated) types? 


## Links:
- [Learncpp.: 7.2 - 7.5](https://www.learncpp.com/)

