#include "Zombie.hpp"
#include <iostream>
Zombie* newZombie(std::string name) {
    Zombie *newZombie = new Zombie(name);
    if (!newZombie)
    {
        std::cout << "Dont allocate memmory" << "\n";
        exit (1);
    }
    return (newZombie);
};