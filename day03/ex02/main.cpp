#include "FragTrap.Class.hpp"
#include "ClapTrap.Class.hpp"
#include "ScavTrap.Class.hpp"
#include <iostream>



int main(void)
{
    ClapTrap objB("John");
    ScavTrap objC("Vert");

 objB.beRepaired(10);

 objC.attack("John");
 objB.takeDamage(objC.getDamage());

 {
  FragTrap objD("Bud");
  objD.highFivesGuys();
  objD.attack("John");
 }
 objB.beRepaired(10);

 objC.guardGate();
}