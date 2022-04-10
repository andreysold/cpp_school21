#include <iostream>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB() {};
HumanB::~HumanB() {};

HumanB::HumanB(std::string name) {
    this->name = name;
}

void    HumanB::attack() {
    std::cout << this->name << ' ' << "attacks with their " << this->ex->getType() << std::endl;
};

void    HumanB::setWeapon(Weapon &ex) {

    this->ex = &ex;
};