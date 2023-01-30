# Group activity 1

> We will have pair-programming only in Full Stack course i.e (ma,ti,to,pe). All C++ activities will be carried in groups. The link to the online Compiler is below.

## Exercise 1

Create a struct to hold a fraction. The struct should have an integer numerator and an integer denominator member.

Write a function to read in a Fraction from the user, and use it to read-in two fraction objects. 
- Write another function to multiply two Fractions together and return the result as a Fraction (you don't need to reduce the fraction).
- Write another function that prints a fraction.

> When multiplying two fractions together, the resulting numerator is the product of the two numerators, and the resulting denominator is the product of the two denominators.

Your program’s output should match the following:
```bash
Enter a value for the numerator: 1
Enter a value for the denominator: 2

Enter a value for the numerator: 3
Enter a value for the denominator: 4

Your fractions multiplied together: 3/8
```

## Exercise 2

1. Create a class called IntPair that holds two integers. This class should have two member variables to hold the integers. You should also create two member functions: one named “set” that will let you assign values to the integers, and one named “print” that will print the values of the variables.

The following main function should execute and produce the output:

```bash
Pair(1, 1)
Pair(2, 2)
```

```cpp
int main()
{
	IntPair p1;
	p1.set(1, 1); // set p1 values to (1, 1)

	IntPair p2 { 2, 2 }; // initialize p2 values to (2, 2)

	p1.print();
	p2.print();

	return 0;
}
```

2. Why should we use a class for IntPair instead of a struct?

## Ref
- https://www.learncpp.com/cpp-tutorial/struct-passing-and-miscellany/
- https://www.learncpp.com/cpp-tutorial/classes-and-class-members/
- [Online Compiler](https://cpp.sh/)
