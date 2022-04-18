#include "Cast.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error arguments" << std::endl;
		return (EXIT_FAILURE);
	}
	Cast	x(argv[1]);
	x.move();
}
