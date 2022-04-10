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
ClapTrap::ClapTrap(std::string name, unsigned int hitPoint, unsigned int energyPoint, unsigned  int damagePoint):
name(name), hitPoint(hitPoint), energyPoint(energyPoint), damagePoint(damagePoint)
{
	std::cout << "ClapTrap constructor called" << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
};

std::string ClapTrap::getName(void) const
{
    return (this->name);
};

unsigned int ClapTrap::getDamage(void) const 
{
    return (this->damagePoint);
};


ClapTrap::ClapTrap(const ClapTrap & other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
};

void ClapTrap::displayInfo(void)
{
	std::cout << "Damage " << this->damagePoint << std::endl;
	std::cout << "Energy " << this->energyPoint << std::endl;
	std::cout << "HitPoint " << this->hitPoint << std::endl;
};

ClapTrap    &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy operator assigment called" << std::endl;
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
        std::cout << "ClapTrap " << this->name << " dont have enough energyPoint on func beRepared" << std::endl;
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

unsigned int    ClapTrap::getEnegry(void) const 
{
    return (this->energyPoint);
};

unsigned int    ClapTrap::getHitPoint(void) const 
{
    return (this->hitPoint);
};