#include "Zombie.hpp"
#include <iostream>

Zombie::~Zombie() {
     std::cout << "Destructor called: " << this->name << "\n";
};
Zombie::Zombie(std::string name) {
    this->name = name;
}

void    Zombie::announce(void) {
    std::cout << this->name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
};