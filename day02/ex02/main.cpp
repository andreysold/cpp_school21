#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;

    Fixed const b( Fixed( 10 ) * Fixed( 2 ) );

//    std::cout << a << std::endl;
//    std::cout << ++a << std::endl;
//    std::cout << a << std::endl;
//    std::cout << a++ << std::endl;
//    std::cout << a << std::endl;
//    std::cout << b << std::endl;
	a++;
	std::cout << b << std::endl;
	Fixed c;
	c = b/a;
	std::cout << c << std::endl;
//	std::cout << a/b<<std::endl;
//	std::cout << a*b << std::endl;
//    std::cout << Fixed::max( a, b ) << std::endl;
    return 0;
}