#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template < typename T >

void	display(T  mass[])
{
//	for (int i = 0; i < 4; i++) {
		std::cout << *mass << std::endl;
//	}
}

template < typename T >

void	move(T	*add, int len, void	(*ptrFunc)(T  mass[]))
{
	for (int i  = 0; i < len; i++) {
		display(add[i]);

	}
	for (int i  = 0; i < 4; i++) {
		std::cout << add[i] << std::endl;
	}
}

#endif