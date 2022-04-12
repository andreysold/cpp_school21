#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	std::cout << "FIRST CASE\n" << std::endl;
	Form	*form = new Form("CDO",false, 1, 1);
	Bureaucrat *f1 = new Bureaucrat("John", 1);
	f1->signForm(*form);
	std::cout << *form << std::endl;

	std::cout << "SECOND CASE\n" << std::endl;
	Bureaucrat *f2 = new Bureaucrat("Karl", 150);
	f2->signForm(*form);
	std::cout << *form << std::endl;

	std::cout << "THIRD CASE\n" << std::endl;
	Bureaucrat *f3 = new Bureaucrat("Karl", 33);
	f2->signForm(*form);
	std::cout << *form << std::endl;

	std::cout << "FOURTH CASE\n" << std::endl;
	Bureaucrat *f4 = new Bureaucrat("Karl", 2);
	f4->incGrage();
	f4->signForm(*form);
	std::cout << *form << std::endl;
	delete f1;
	delete f2;
	delete f3;
	delete f4;
	delete form;
	return (0);
}
