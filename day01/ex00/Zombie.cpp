#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie() {
     std::cout << "Destructor called: " << this->name << std::endl;
};
Zombie::Zombie(std::string name) {
	std::cout << "Constructor called" << std::endl;
    this->name = name;
}

void    Zombie::announce(void) {
    std::cout << this->name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
};