#ifndef HARL_HPP_
# define HARL_HPP_
#include <iostream>

class Harl
{
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);

    public:
        void complain( std::string level );
        // void	(Harl::*ptrFunc[4])();
        // void	(Harl::*ptrFunc[4])();
        void	circleCd(std::string *levelUp, std::string level, int *i);
        Harl();
        ~Harl();
};

#endif