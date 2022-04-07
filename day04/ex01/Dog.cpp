#include "Animal.hpp"
#include "Dog.hpp"
#include <iostream>


Dog::Dog()
{
    this->type = "Dog";
	this->Dptr = new Brain();
    std::cout << "Dog constructor called" << std::endl;
};

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
	delete this->Dptr;
};

Dog::Dog(const Dog &other)
{
	this->Dptr = new Brain();
    std::cout << "Dog copy constructor called" << std::endl;
	(*this) = other;
};

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog copy assigment operator called" << std::endl;
	*this->Dptr = *other.Dptr;
	this->type = other.type;
    return (*this);
};

void    Dog::makeSound(void) const
{
    std::cout << "GAV GAV GAV SUKA" << std::endl;
};

std::string Dog::getType() const
{
    return (this->type);
};

void	Dog::displayInfo() const
{
	std::cout << "DOG " << this->type << std::endl;
}