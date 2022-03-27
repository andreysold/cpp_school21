// #ifndef HUMANA_HPP_
// # define HUMANB_HPP_

#include <iostream>
#include "Weapon.hpp"
class HumanA
{
    private:
        Weapon &ex;
        std::string name;
    public:
        HumanA(std::string tame, Weapon &eb);
        void    attack();
        ~HumanA();
};


// #endif