#include "Zombie.hpp"


Zombie::Zombie() {
    std::cout << "Zombie is ldefault is born" << std::endl;
};

void    Zombie::setName(std::string name) {
    this->name = name;
};

Zombie::~Zombie(){
    std::cout << "Zombie is ldefault died" << std::endl;
};

void    Zombie::getName() {
    std::cout << "Funny Zombie name is " << this->name << std::endl;
};