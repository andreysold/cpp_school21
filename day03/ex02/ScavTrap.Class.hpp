#ifndef SCAVTRAP_CLASS_HPP_
# define SCAVTRAP_CLASS_HPP_

#include "ClapTrap.Class.hpp"
class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        ScavTrap(std::string name);
        void    guardGate(void);
        void    attack(const std::string &target);
};

#endif