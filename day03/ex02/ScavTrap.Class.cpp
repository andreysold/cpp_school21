#include <iostream>
#include "ScavTrap.Class.hpp"
#include "ClapTrap.Class.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "Scav constructor called" << std::endl;
};

ScavTrap::~ScavTrap()
{
    std::cout << "Scav destructor called" << std::endl;
};

ScavTrap::ScavTrap(const ScavTrap &other)
{
    (*this) = other;
    std::cout << "Scav copy constructor called" << std::endl;
};

ScavTrap    &ScavTrap::operator=(const ScavTrap &other)
{
    this->damagePoint = other.damagePoint;
    this->energyPoint = other.energyPoint;
    this->hitPoint = other.hitPoint;
    std::cout << "Scav copy operator assigment" << std::endl;
    return (*this);
};

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "Scav constructor called" << std::endl;
    setDamage(20);
    setHit(100);
    setEnergy(50);
};

void    ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << this->getName() << "is now in Gate keeper mode!" << std::endl;
};

void    ScavTrap::attack(const std::string &target) 
{
    if (this->energyPoint > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << " causing " << this->damagePoint << " points of damage!" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ScavTrap " << this->getName() << " have not energyPoint" << std::endl;
};