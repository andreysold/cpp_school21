#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string tame, Weapon &eb):name(tame), ex(eb) {};

HumanA::~HumanA(){};

void    HumanA::attack() {
    std::cout << this->name << ' ' << "attacks with their " << this->ex.getType() << std::endl;
}

