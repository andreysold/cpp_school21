#include "Base.hpp"
#include <stdio.h>
#include <iostream>


Base	*generate(void)
{
	int x;
	srand(time(NULL));
	x = rand()%3+1;
	switch (x) {
		case 1:
			std::cout << "Create class A" << std::endl;
			return new (A);
		case 2:
			std::cout << "Create class B" << std::endl;
			return new (B);
		case 3:
			std::cout << "Create class C" << std::endl;
			return new (C);
		default:
			std::cout << "Invalid value" << std::endl;
			break;
	}
	return (NULL);
}

void identify(Base* p)
{
	if (p == dynamic_cast<A *>(p))
		std::cout << "Actual type is A" << std::endl;
	else if (p == dynamic_cast<B *>(p))
		std::cout << "Actual type is B" << std::endl;
	else
		std::cout << "Actual type is C" << std::endl;
}

void	identify(Base &p)
{
	Base *ptr = &p;
	if (ptr == dynamic_cast<A *>(ptr))
		std::cout << "Actual type is A" << std::endl;
	else if (ptr == dynamic_cast<B *>(ptr))
		std::cout << "Actual type is B" << std::endl;
	else
		std::cout << "Actual type is C" << std::endl;
}

int main()
{
	Base *x;
	x = generate();
	identify(x);
	identify(*x);
	delete x;
	return (0);
}