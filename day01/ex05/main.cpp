#include <iostream>
#include "Harl.hpp"

void    a(void) {
	std::cout << "a";
}

void    b(void) {
	std::cout << "b";
}


typedef void (*func) (void);

int main()
{
	Harl ex;
	ex.complain("debug");
	ex.complain("info");
	ex.complain("warning");
	ex.complain("error");
	return (0);
}