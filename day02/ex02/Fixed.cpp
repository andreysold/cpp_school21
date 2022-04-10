#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : _fixNumPoint(0) {
    std::cout << "Default constructor called" << '\n';
};

Fixed::Fixed(float const number) {
    std::cout << "Float constructor called" << '\n';
    this->_fixNumPoint = round(number * (1 << this->_fractBits));
};

Fixed::Fixed(int const number) {
    std::cout << "Int constructor called" << '\n';
    this->_fixNumPoint = number << this->_fractBits;
};

int Fixed::getRawBits(void) const {
    return (this->_fixNumPoint);
};

Fixed::Fixed(Fixed const &other) {
    std::cout << "Copy constructor called" << '\n';
    this->_fixNumPoint = other.getRawBits();
};

Fixed::~Fixed() {
    std::cout << "Default destructor called" << '\n';
};

Fixed   &Fixed::operator=(Fixed const &other){
    std::cout << "Copy assigment operator called" << '\n';
    this->_fixNumPoint = other.getRawBits();
    return (*this);
};

int Fixed::toInt(void) const {
    return ((int)this->_fixNumPoint / (1 << this->_fractBits));
};

float   Fixed::toFloat(void) const {
    return ((float)this->_fixNumPoint / (1 << this->_fractBits));
};

std::ostream &operator<<(std::ostream &os, Fixed const &other)
{
    os << other.toFloat();
    return (os);
};

Fixed   Fixed::operator*(Fixed const &other) const
{
    Fixed   result = (this->toFloat() * other.toFloat());
    return (result);
};

Fixed   Fixed::operator+(Fixed const &other) const
{
    Fixed result = (this->toFloat() + other.toFloat());
    return (result);
};

Fixed   Fixed::operator-(Fixed const &other) const
{
    return (Fixed(this->toFloat() - other.toFloat()));
};

Fixed   Fixed::operator/(Fixed const &other) const
{
    return (Fixed(this->toFloat() / other.toFloat()));
};


bool    Fixed::operator>(Fixed const &other) const
{
    if (this->toFloat() > other.toFloat())
        return (true);
    return (false);
};

bool    Fixed::operator<(Fixed const &other) const
{
    if (this->toFloat() < other.toFloat())
        return (true);
    return (false);
};

bool    Fixed::operator!=(Fixed const &other) const
{
    if (this->toFloat() != other.toFloat())
        return (true);
    return (false);
};

bool    Fixed::operator>=(Fixed const &other) const
{
    if (this->toFloat() >= other.toFloat())
        return (true);
    return (false);
};

bool    Fixed::operator<=(Fixed const &other) const
{
    if (this->toFloat() <= other.toFloat())
        return (true);
    return (false);
};

bool    Fixed::operator==(Fixed const &other) const
{
    if (this->toFloat() == this->toFloat())
        return (true);
    return (false);
};

Fixed   &Fixed::max(Fixed &one, Fixed &two)
{
    if (one > two)
        return (one);
    return (two);
};

const Fixed &Fixed::max(const Fixed &one, const Fixed &two)
{
    if (one > two)
        return (one);
    return (two);
};


Fixed   &Fixed::min(Fixed &one, Fixed &two)
{
    if (one < two)
        return (one);
    return (two);
};

const Fixed &Fixed::min(Fixed const  &one, Fixed const &two)
{
    if (one < two)
        return (one);
    return (two);
};

Fixed   &Fixed::operator++(void)
{
    this->_fixNumPoint++;
    return (*this);
};

Fixed   Fixed::operator++(int)
{
    Fixed   last(*this);
    ++(*this);
    return (last);
};

Fixed   Fixed::operator--(int)
{
    Fixed   last(*this);
    --(*this);
    return (last);
};

Fixed   &Fixed::operator--(void)
{
    this->_fixNumPoint--;
    return (*this);
};