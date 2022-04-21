#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template < typename T >

void	display(T & mass)
{
	std::cout << mass << std::endl;
}

template < typename T >

void	increment(T & mass)
{
	mass += 1.0f;
}

template < typename T >

void	decrement(T & mass)
{
	mass -= 1;
}

template < typename T >

void	printMassiv(T mass[])
{
	std::cout << "MASSIV" << std::endl;
	for (int i  = 0; i < 4; i++) {
		std::cout << mass[i] << std::endl;
	}
}

template < typename T >

void	iter(T	*add, int len, void	(*ptrFunc)(T & x))
{
	std::cout << "BEFORE" << std::endl;
	printMassiv(add);
	for (int i  = 0; i < len; i++) {
		(*ptrFunc)(add[i]);
	}
	std::cout << "AFTER" << std::endl;
	printMassiv(add);
}
#endif