#include <iostream>
#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called" << std::endl;
};

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
};

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = other.type;
};

Animal  &Animal::operator=(const Animal &other)
{
    std::cout << "Animal copy assigment operator called" << std::endl;
    this->type = other.type;
    return (*this);
};

void    Animal::makeSound() const
{
    std::cout << "Animal makeSound" << std::endl;
};

std::string Animal::getType() const
{
    return this->type;
};

void	Animal::displayInfo() const
{
	std::cout << this->type << std::endl;
};