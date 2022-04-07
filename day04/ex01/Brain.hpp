#ifndef BRAIN_CPP
# define BRAIN_CPP
#include <iostream>


class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain &other);

	Brain	&operator=(const Brain &other);
};

#endif