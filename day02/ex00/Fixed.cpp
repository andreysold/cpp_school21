#include <iostream>
#include "Fixed.hpp"


Fixed::Fixed(): _fixNumPoint(0) {
    std::cout << "Default Constructor called" << '\n';
};

Fixed::~Fixed(){
    std::cout << "Default Destructor called" << '\n';
};

Fixed::Fixed(const Fixed &other) {
    std::cout << "Copy constructor called" << '\n';
    this->_fixNumPoint = other.getRawBits();
};

Fixed  & Fixed::operator=(const Fixed &other) {
    std::cout << "Copy assigment operator called" << '\n';
    this->_fixNumPoint = other.getRawBits();
    return (*this);
};

int Fixed::getRawBits(void) const {
    std::cout << "GetRawBits func called" << '\n';
    return (this->_fixNumPoint);
};

void    Fixed::setRawbits(int const raw) {
    std::cout << "setRawbits func called" << '\n';
    this->_fixNumPoint = raw;
};