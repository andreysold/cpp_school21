#ifndef CLAPTRAP_CLASS_HPP_
# define CLAPTRAP_CLASS_HPP_

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int damagePoint;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &other);
        ClapTrap    &operator=(const ClapTrap &other);

        std::string getName(void);
        unsigned int getDamage(void);
		unsigned int getenergy(void);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
};

#endif