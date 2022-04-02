#ifndef FIXED_HPP_
#define FIXED_HPP_

#include <iostream>
#include <fstream>

class Fixed
{
    private:
        static const int _fractBits = 8;
        int _fixNumPoint;
    public:
        Fixed();
        Fixed(float const number);
        Fixed(int const number);
        Fixed(Fixed const &other);
        Fixed   &operator=(Fixed const &other);
        Fixed   operator*(Fixed const &other) const ;
        Fixed   operator+(Fixed const &other) const;
        Fixed   operator-(Fixed const &other) const;
        Fixed   operator/(Fixed const &other) const;
        static Fixed   &max(Fixed  &one,Fixed  &two);
        ~Fixed();

        bool    operator>(Fixed const &other) const;
        bool    operator>=(Fixed const &other) const;
        bool    operator<(Fixed const &other) const;
        bool    operator<=(Fixed const &other) const;
        bool    operator==(Fixed const &other) const;
        bool    operator!=(Fixed const &other) const;
        float   toFloat(void) const;
        int     toInt(void) const;
        int     getRawBits(void) const;
        void    setRawBits(int number);

};

std::ostream &operator<<(std::ostream &os, Fixed const &other);

#endif