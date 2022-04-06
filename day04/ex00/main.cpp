#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
int main(void)
{
    std::cout << "Animal, Cat, Dog.." << std::endl;
    {
        const Animal *meta = new Animal();
        const Animal *j = new Dog();
        const Animal *i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound(); //will output the cat sound!
        j->makeSound();
        meta->makeSound();
        delete meta;
        delete j;
        delete i;
    }
    std::cout << "WrongAnimal, WrongCat.." << std::endl;
    {
		const WrongAnimal *t1 = new WrongAnimal();
		const WrongAnimal *t2 = new WrongCat();
		std::cout << t1->getType() << std::endl;
		std::cout << t2->getType() << std::endl;
		t1->makeSound();
		t2->makeSound();
		delete t1;
		delete t2;
    }
    return (0);
}
