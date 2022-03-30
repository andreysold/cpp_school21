#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>

class Fixed {
	private:
		int value;
		static int const literal = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &other);
		Fixed &operator =(const Fixed &other);
		Fixed &operator +(const Fixed &other);
		int getRawBits(void) const;
};

std::ostream & operator<<(std::ostream & o, Fixed const & rhs);

#endif