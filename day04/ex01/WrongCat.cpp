#include <iostream>
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"


WrongCat::WrongCat()
{
    std::cout << "WrongCat constructor called" << std::endl;
};

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
};

WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->type = other.type;
};

WrongCat	&WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Copy assigment operator called" << std::endl;
	this->type = other.type;
	return (*this);
};

std::string WrongCat::getType() const {
	return this->type;
};

void	WrongCat::makeSound() const
{
	std::cout << "MEOW MEOW MEOW.." << std::endl;
};