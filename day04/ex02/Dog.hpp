#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public Animal
{
private:
	Brain	*Dptr;
public:
    Dog();
    virtual ~Dog();
    Dog(const Dog &other);
    Dog &operator=(const Dog &other);
    void    makeSound(void) const;
	void	displayInfo(void) const;
    std::string getType(void) const;
};




#endif