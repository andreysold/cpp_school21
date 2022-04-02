#include <iostream>
#include "Fixed.hpp"
#include <fstream>
Fixed::Fixed() : _fixNumPoint(0) {
    std::cout << "default constructor called" << '\n';
};

Fixed::~Fixed() {
    std::cout << "default destructor called" << '\n';
}

Fixed::Fixed(int const number) {
    std::cout << "Int constructor called" << '\n';
    this->_fixNumPoint = number << this->_fracBits;
}

Fixed::Fixed(float const number) {
    float power;
    power = pow(2, this->_fracBits);
    std::cout << "float constructor called" << '\n';
    this->_fixNumPoint = round(number * power);
};

Fixed::Fixed(Fixed const &other) {
   
    this->_fixNumPoint= other.getRawBits();
    std::cout << "Copy constructor called\n";
};

float   Fixed::toFloat(void) const {
    int power;

    power = pow(2, this->_fracBits);
    return ((float)_fixNumPoint / power);
};

Fixed   &Fixed::operator=(const Fixed &other)
{
    std::cout << "Copy assigment operator called" << '\n';
    this->_fixNumPoint = other.getRawBits();
    return (*this);
};


int     Fixed::toInt(void) const {
    return ((int)this->_fixNumPoint / (1 << this->_fracBits));
};

int Fixed::getRawBits(void) const {
    std::cout << "GetRawBits func called" << '\n';
    return this->_fixNumPoint;
};

void    Fixed::setRawbits(int const number)
{
    this->_fixNumPoint = number;
}

std::ostream &operator<<(std::ostream &os, Fixed const &instance)
{
    os << instance.toFloat();
    return os;
};