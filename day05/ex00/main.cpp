#include <iostream>

#include "Bureaucrat.hpp"
#include <iomanip>
int main()
{
	std::cout << std::setw (24) << "First case" << std::endl;
	try {
		Bureaucrat *f1 = new Bureaucrat("Jon", 44444);
		Bureaucrat *f2 = new Bureaucrat(*f1);
		delete f1;
		delete f2;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::setw (24) << "Second case" << std::endl;
	try
	{
		Bureaucrat *f3 = new Bureaucrat("Katia", -4);
		Bureaucrat *f4 = new Bureaucrat(*f3);
		delete f3;
		delete f4;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::setw (24) << "Third case" << std::endl;
	try
	{
		Bureaucrat *f5 = new Bureaucrat("Lola", 151);
		Bureaucrat *f6 = new Bureaucrat(*f5);

		delete f5;
		delete f6;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
