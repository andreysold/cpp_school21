#include <iostream>



class Zombie {
    private:
        std::string name;
    public:
        Zombie();
        ~Zombie();
        void    setName(std::string name);
        void    getName(void);
};
Zombie* zombieHorde( int N, std::string name );