#include "ClapTrap.Class.hpp"
#include <iostream>


ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(1), damagePoint(2)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
};

ClapTrap::ClapTrap() : hitPoint(10), energyPoint(10), damagePoint(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
};

ClapTrap::ClapTrap(const ClapTrap & other)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = other;
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
    std::cout << "ClapTrap Copy operator assigment called" << std::endl;
    this->damagePoint = other.damagePoint;
    this->energyPoint = other.energyPoint;
    this->hitPoint = other.hitPoint;
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
        std::cout << "ClapTrap " << this->name << " dont have enoght energyPoint on func beRepared" << std::endl;
};

void    ClapTrap::setDamage(unsigned int val)
{
    this->damagePoint = val;
};

void    ClapTrap::setEnergy(unsigned int val)
{
    this->energyPoint = val;
};

void    ClapTrap::setHit(unsigned int val)
{
    this->hitPoint = val;
};

unsigned int    ClapTrap::getEnegry(void)
{
    return (this->energyPoint);
};

unsigned int    ClapTrap::getHitPoint(void)
{
    return (this->hitPoint);
};