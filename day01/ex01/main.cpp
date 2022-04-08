#include <iostream>
#include "Zombie.hpp"
int main()
{
    Zombie *newZomb;
    int N = 0;
    std::string name;
    std::cout << "Please, enter name for your funny Zombie (string/char): ";
    std::cin >> name;
    std::cout << "Also, enter how many Funny zombies you want to create (int): ";
    std::cin >> N;
    newZomb = zombieHorde(N, name);
    if (!newZomb)
    {
        std::cout << "Didnt allocate memory for newZomb" << std::endl;
        return (-1);
    }
    for (int i = 0; i < N; i++) {
        newZomb[i].getName();
    }
    delete []newZomb;
    return (0);
}