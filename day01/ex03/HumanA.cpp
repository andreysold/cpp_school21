#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string tame, Weapon &eb): ex(eb), name(tame) {};

HumanA::~HumanA(){};

void    HumanA::attack() {
    std::cout << this->name << ' ' << "attacks with their " << this->ex.getType() << std::endl;
}

