# Group activity 2

> We will have pair-programming only in Full Stack course i.e (ma,ti,to,pe). All C++ activities will be carried in groups. The link to the online Compiler is below.

## Exercise 1

- What is a public member?
- What is a private member?
- What is an access specifier?
- How many access specifiers are there, and what are they?

## Exercise 2 

1. Write a simple class named Point3d. The class should contain:

- Three private member variables of type int named m_x, m_y, and m_z;
- A public member function named setValues() that allows you to set values for m_x, m_y, and m_z.
- A public member function named print() that prints the Point in the following format: <m_x, m_y, m_z>

Make sure the following program executes correctly:
```cpp
int main()
{
    Point3d point;
    point.setValues(1, 2, 3);

    point.print();
    std::cout << '\n';

    return 0;
}
```

2. Add a function named isEqual() to your Point3d class. The following code should run correctly:

```cpp
int main()
{
    Point3d point1;
    point1.setValues(1, 2, 3);

    Point3d point2;
    point2.setValues(1, 2, 3);

    if (point1.isEqual(point2))
    {
        std::cout << "point1 and point2 are equal\n";
    }
    else
    {
        std::cout << "point1 and point2 are not equal\n";
    }

    Point3d point3;
    point3.setValues(3, 4, 5);

    if (point1.isEqual(point3))
    {
        std::cout << "point1 and point3 are equal\n";
    }
    else
    {
        std::cout << "point1 and point3 are not equal\n";
    }

    return 0;
}
```

## Exercise 3 
Discuss the difference(s) between class and struct in C++.

## Ref
- https://www.learncpp.com/cpp-tutorial/public-vs-private-access-specifiers/
- [Online Compiler](https://cpp.sh/)
