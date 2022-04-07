#ifndef WRONGCAT
# define WRONGCAT

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat &other);
    std::string getType(void) const;
    void    makeSound(void) const;

    WrongCat    &operator=(const WrongCat &other);

};
#endif