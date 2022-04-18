#include "Cast.hpp"
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error arguments" << std::endl;
		exit (0);
	}
	Cast	x(argv[1]);
	x.move();
}
