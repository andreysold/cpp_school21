#ifndef ZOMBIE_HPP_
# define ZOMBIE_HPP_
#include <iostream>
class Zombie {
    private:
        std::string name;
    public:
        ~Zombie();
        Zombie(std::string name);
        void    announce(void);
};
Zombie* newZombie(std::string name);
void    randomChump(std::string name);
#endif