#ifndef CLAPTRAP_CLASS_HPP_
# define CLAPTRAP_CLASS_HPP_

#include <iostream>

class ClapTrap
{
    protected:
        std::string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int damagePoint;
    public:
        ClapTrap();
		ClapTrap(std::string name, unsigned int hitPoint, unsigned int energyPoint, unsigned  int damagePoint);
        ClapTrap(std::string name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &other);
        ClapTrap    &operator=(const ClapTrap &other);

        std::string getName(void) const ;
        unsigned int getDamage(void) const;
        unsigned int getEnegry(void) const ;
        unsigned int getHitPoint(void) const ;
        void    setDamage(unsigned int val);
        void    setEnergy(unsigned int val);
        void    setHit(unsigned int val);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
		void 	displayInfo(void);
};

#endif