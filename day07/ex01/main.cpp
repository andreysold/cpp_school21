#include "iter.hpp"
#include <iostream>

int main()
{
	int mass[4] = {4, 3, 2, 1};
	iter(mass, 4, display);

	float fMassiv[4] = {4.2f, 3.4f,5.4f,2.2f};
	iter(fMassiv, 4, increment);

	char str[] = "Go top language!";
	iter(str, strlen(str), display);
	return (0);
}