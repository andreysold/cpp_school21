#include <iostream>
#include "Fixed.hpp"

int main()
{
    Fixed a;
    Fixed b( Fixed( 5.05f ) * Fixed( 2 ) );
    std::cout << b << '\n';
	
    return (0);
}