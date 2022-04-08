#include "Zombie.hpp"
#include <iostream>

int main()
{
	Zombie *zomb;
	std::cout << "|Zombie on heap|\n";
	zomb = newZombie("Charly");
	zomb->announce();
	std::cout << "|Zombie on stack|\n";
	randomChump("Karl");
	delete (zomb);
	return(0);
}