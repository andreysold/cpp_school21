#ifndef FRAGTRAP_CLASS_HPP_
# define FRAGTRAP_CLASS_HPP_
#include "ClapTrap.Class.hpp"


class FragTrap: public ClapTrap
{
    public:
        FragTrap(std::string name);
        FragTrap();
        ~FragTrap();
        FragTrap &operator=(const FragTrap &other);
        FragTrap(const FragTrap &other);
        void highFivesGuys(void);
        void attack(std::string &target);
};


#endif