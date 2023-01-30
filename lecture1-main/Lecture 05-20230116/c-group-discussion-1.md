# Group activity 1

> We will have pair-programming only in Full Stack course i.e (ma,ti,to,pe). All C++ activities will be carried in groups. The link to the online Compiler is below.

## Exercise 1
What happens if you don’t declare a default constructor?

## Exercise 2

1. Write a class named Ball. Ball should have two private member variables with default values: m_color (“black”) and m_radius (10.0). Ball should provide constructors to set only m_color, set only m_radius, set both, or set neither value. For this quiz question, do not use default parameters for your constructors. Also write a function to print out the color and radius of the ball.


The  program below should produce the result:
```bash
color: black, radius: 10
color: blue, radius: 10
color: black, radius: 20
color: blue, radius: 20
```

```cpp
int main()
{
	Ball def{};
	def.print();

	Ball blue{ "blue" };
	blue.print();

	Ball twenty{ 20.0 };
	twenty.print();

	Ball blueTwenty{ "blue", 20.0 };
	blueTwenty.print();

	return 0;
}
```

2. Update your answer to the previous question to use constructors with default parameters. Use as few constructors as possible.

## Ref
- https://www.learncpp.com/cpp-tutorial/constructors/
- [Online Compiler](https://cpp.sh/)