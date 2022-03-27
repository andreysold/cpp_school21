#ifndef WEAPON_HPP_
# define WEAPON_HPP_
#include <iostream>
class Weapon {
    private:
        std::string type;
    public:
        Weapon(std::string type);
        Weapon();
        ~Weapon();
        void    setType(std::string type);
        std::string const &    getType();
};
#endif