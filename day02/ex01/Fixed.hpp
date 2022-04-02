#include <iostream>

#ifndef FIXED_HPP_
#define FIXED_HPP_


class   Fixed {
    private:
        static const int _fracBits = 8;
        int _fixNumPoint;
    public:
        Fixed();
        ~Fixed();
        Fixed(int const number);
        Fixed(float const number);
        Fixed(Fixed const &other);
        Fixed   &operator=(const Fixed &other);

        int     getRawBits(void) const;
        void    setRawbits(int const number);
        float   toFloat(void) const;
        int     toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, Fixed const &instance);

#endif