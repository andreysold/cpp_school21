#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>


Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog constructor called" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
};

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor called" << std::endl;
    this->type = other.type;
};

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assigment operator called" << std::endl;
    (*this) = other;
    return (*this);
};

void    Dog::makeSound(void) const
{
    std::cout << "GAV GAV GAV SUKA" << std::endl;
};

std::string Dog::getType() const
{
    return (this->type);
}