#include "Zombie.hpp"
#include <iostream>
Zombie* newZombie(std::string name) {
    Zombie *newZombie = new Zombie(name);
    return (newZombie);
};