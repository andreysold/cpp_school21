#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *ex;
        std::string name;
    public:
        HumanB();
        HumanB(std::string name);
        ~HumanB();
        void    setWeapon(Weapon &ex);
        void    attack();
};