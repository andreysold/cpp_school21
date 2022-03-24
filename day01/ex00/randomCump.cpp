#include "Zombie.hpp"
#include <iostream>


void    randomChump(std::string name) {
    Zombie tmp(name);
    tmp.announce();
    std::cout << "BraiiiiiiinnnzzzZ" << std::endl;
}