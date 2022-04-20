#include <iostream>
#include "whatever.hpp"
template < typename T1 >

void	swap( T1 &x, T1 &y)
{
	T1 tmp;
	tmp = x;
	x = y;
	y = tmp;
};

template < typename T2 >

T2	min(T2 const x, T2 const y)
{
	return ((x < y) ? x:y);
};

template < typename T3 >

T3	max(T3 const x, T3 const y)
{
	return ((x >= y) ? x:y);
}

int main()
{
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;

	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;

	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}
