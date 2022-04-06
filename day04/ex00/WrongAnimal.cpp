#include "WrongAnimal.hpp"
#include <iostream>


WrongAnimal::WrongAnimal()
{
	this->type = "default";
    std::cout << "WrongAnimal constructor called" << std::endl;
};

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAmi,al destructor called" << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal Copy cpnstructor called" << std::endl;
    this->type = other.type;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assigment operator called" << std::endl;
    (*this) = other;
    return (*this);
};

void    WrongAnimal::makeSound() const
{
    std::cout << "SOUND ANIMAL" << std::endl;
};

std::string WrongAnimal::getType() const
{
    return this->type;
};