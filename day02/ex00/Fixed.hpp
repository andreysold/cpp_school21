#ifndef FIXED_HPP_
# define FIXED_HPP_



class Fixed
{
    private:
        int _fixNumPoint;
        static const int _fracBits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed   &operator=(const Fixed &other);
        
        int     getRawBits(void) const;
        void    setRawbits(int const raw);
};

#endif