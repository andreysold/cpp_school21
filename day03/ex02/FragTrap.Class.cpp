#include "ClapTrap.Class.hpp"
#include "FragTrap.Class.hpp"
#include <iostream>

FragTrap::FragTrap()
{
    std::cout << "FragTrap constructor called" << std::endl;
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
};

FragTrap::FragTrap(const FragTrap &other)
{
    this->damagePoint = other.damagePoint;
    std::cout << "FragTrap copy constructor called" << std::endl;
};

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "Copy operator assigment called" << std::endl;
    this->damagePoint = other.damagePoint;
    this->energyPoint = other.energyPoint;
    this->hitPoint = other.hitPoint;
    return (*this);
};

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap high Fives Guys" << std::endl;
};

FragTrap::FragTrap(std::string 	name) : ClapTrap(name)
{
    std::cout << "Frag constructor called" << std::endl;
    setDamage(30);
    setEnergy(100);
    setHit(100);
};

void	FragTrap::attack(const std::string &target) {
	if (this->energyPoint > 0)
	{
		std::cout << "FragTrap " << this->name << " attacks " << target << " causing " << this->damagePoint << " points of damage!" << std::endl;
		this->energyPoint--;
	}
	else
		std::cout << "FragTrap " << this->getName() << " have not energyPoint" << std::endl;
}