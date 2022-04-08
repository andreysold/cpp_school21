#include "ScavTrap.Class.hpp"
#include "ClapTrap.Class.hpp"
#include <iostream>



int main(void)
{

    ClapTrap objB("John");
    ScavTrap objC("Vert");

    objB.beRepaired(10);

    objC.attack("John");
    objB.takeDamage(objC.getDamage());

    objB.beRepaired(10);

    objC.guardGate();
 	return (0);
}