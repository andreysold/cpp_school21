#include "Animal.hpp"
#include "Cat.hpp"

#include <iostream>


Cat::Cat()
{
    std::cout << "Cat constructor called" << std::endl;
    this->type = "Cat";
	this->Cptr = new Brain();
};

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
	delete this->Cptr;
};

Cat::Cat(const Cat &other)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->Cptr = new Brain();
	*this = other;
};

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat  assigment operator called" << std::endl;
    *this->Cptr = *other.Cptr;
	this->type = other.type;
    return (*this);
};

void    Cat::makeSound() const
{
    std::cout << "MEOW MEOW MEOW BITCH" << std::endl;
};

std::string Cat::getType(void) const
{
    return (this->type);
};

void	Cat::displayInfo() const
{
	std::cout <<"CAT " << this->type << std::endl;
};