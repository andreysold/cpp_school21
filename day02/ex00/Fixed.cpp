#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout <<"Default constructor called" << std::endl;
};

Fixed::~Fixed() {
	std::cout << "Default destructor called" << std::endl;
};

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->value;
};

Fixed::Fixed(const Fixed &other){
	value = other.value;
	std::cout << "Copy constructor called" << std::endl;
};

Fixed	& Fixed::operator=(const Fixed& rhs) {
	if (this != &rhs) {
		value = rhs.value;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
};

