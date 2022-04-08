#include <iostream>
#include "ClapTrap.Class.hpp"

int main()
{
    ClapTrap f1("John");
    ClapTrap f2("Serega");
    f1.attack(f2.getName());
    f2.takeDamage(f1.getDamage());
    f2.beRepaired(1);
    f1.attack(f2.getName());

    return (0);
}
