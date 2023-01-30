
# Group activity 2

> We will have pair-programming only in Full Stack course i.e (ma,ti,to,pe). All C++ activities will be carried in groups. The link to the online Compiler is below.

## Exercise 1

Create a Fruit base class that contains two private members: a name (std::string), and a color (std::string). 
Create an Apple class that inherits Fruit. 
Apple should have an additional private member: fiber (double). 
Create a Banana class that also inherits Fruit. Banana has no additional members.

The following program should run:
```cpp
#include <iostream>

int main()
{
	const Apple a{ "Red delicious", "red", 4.2 };
	std::cout << a << '\n';

	const Banana b{ "Cavendish", "yellow" };
	std::cout << b << '\n';

	return 0;
}
```

And print the following:

```bash
Apple(Red delicious, red, 4.2)
Banana(Cavendish, yellow)
```
## Exercise 2

For each of the following programs, determine what they output, or if they would not compile, indicate why. This exercise is meant to be done by inspection, so do not compile these (otherwise the answers are trivial).

```cpp
#include <iostream>

class Base
{
public:
    Base()
    {
        std::cout << "Base()\n";
    }
    ~Base()
    {
        std::cout << "~Base()\n";
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        std::cout << "Derived()\n";
    }
    ~Derived()
    {
        std::cout << "~Derived()\n";
    }
};

int main()
{
    Derived d;

    return 0;
}
```

2.

```cpp
#include <iostream>

class Base
{
public:
	Base()
	{
		std::cout << "Base()\n";
	}
	~Base()
	{
		std::cout << "~Base()\n";
	}
};

class Derived: public Base
{
public:
	Derived()
	{
		std::cout << "Derived()\n";
	}
	~Derived()
	{
		std::cout << "~Derived()\n";
	}
};

int main()
{
	Derived d;
	Base b;

	return 0;
}
```

3.

```cpp
#include <iostream>

class Base
{
private:
	int m_x {};
public:
	Base(int x): m_x{ x }
	{
		std::cout << "Base()\n";
	}
	~Base()
	{
		std::cout << "~Base()\n";
	}

	void print() const { std::cout << "Base: " << m_x << '\n';  }
};

class Derived: public Base
{
public:
	Derived(int y):  Base{ y }
	{
		std::cout << "Derived()\n";
	}
	~Derived()
	{
		std::cout << "~Derived()\n";
	}

	void print() const { std::cout << "Derived: " << m_x << '\n'; }
};

int main()
{
	Derived d{ 5 };
	d.print();

	return 0;
}
```

## Exercise 3
- What is the protected access specifier?
- Determine  the output of the following program?  

```cpp
#include <iostream>

class Base
{
protected:
	int m_x {};
public:
	Base(int x): m_x{ x }
	{
		std::cout << "Base()\n";
	}
	~Base()
	{
		std::cout << "~Base()\n";
	}

	void print() const { std::cout << "Base: " << m_x << '\n';  }
};

class Derived: public Base
{
public:
	Derived(int y):  Base{ y }
	{
		std::cout << "Derived()\n";
	}
	~Derived()
	{
		std::cout << "~Derived()\n";
	}

	void print() const { std::cout << "Derived: " << m_x << '\n'; }
};

int main()
{
	Derived d{ 5 };
	d.print();

	return 0;
}
```






## Ref
- https://www.learncpp.com/cpp-tutorial/chapter-17-comprehensive-quiz/constructors-and-initialization-of-derived-classes/
- [Online Compiler](https://cpp.sh/)