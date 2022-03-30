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
	std::cout << "Copy constructor called" << std::endl;
	value = other.getRawBits();
};

Fixed	& Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->value = rhs.getRawBits();
	return (*this);
};

void	Fixed::setRawBits(int const raw) {
	this->value = raw;
};
