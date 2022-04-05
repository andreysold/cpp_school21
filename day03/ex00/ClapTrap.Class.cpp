#include "ClapTrap.Class.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(1), damagePoint(2)
{
    std::cout << "Constructor called" << std::endl;
};

ClapTrap::ClapTrap() : hitPoint(10), energyPoint(10), damagePoint(0)
{
    std::cout << "Constructor called" << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap & other)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = other.name;
    this->hitPoint = other.hitPoint;
    this->energyPoint = other.energyPoint;
    this->damagePoint = other.damagePoint;
};

std::string ClapTrap::getName(void)
{
    return (this->name);
};

unsigned int ClapTrap::getDamage(void)
{
    return (this->damagePoint);
}
ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy operator assigment called" << std::endl;
    (*this) = other;
    return (*this);
};

void    ClapTrap::attack(const std::string &target)
{
    if (this->energyPoint > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << " causing " << this->damagePoint << " points of damage!" << std::endl;
        this->energyPoint--;
    }
    else
        std::cout << "ClarTrap " << this->getName() << " have not energyPoint" << std::endl;
};

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > this->hitPoint)
        this->hitPoint = 0;
    else
        this->hitPoint -= amount;
    std::cout << "ClapTrap " << this->name << " has " << this->hitPoint << " hitPoints" << std::endl;
};

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoint > 0)
    {
        this->hitPoint += amount;
        this->energyPoint--;
        std::cout << "ClapTrap " << this->name << " be repaired and lost 1 energyPoint, but also he/she has " << this->hitPoint << " hitPoints" << std::endl;
        std::cout << "ClapTrap " << this->name << " lost 1 energyPoint and he/she has " << this->energyPoint << " energyPoints" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << "dont have enoght energyPoint on func beRepared" << std::endl;
};
