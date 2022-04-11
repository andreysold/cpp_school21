#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{
	Bureaucrat *b = new Bureaucrat("Zhopa", 1);
	RobotomyRequestForm *f1 = new RobotomyRequestForm("Zloy");
	b->decGrade();
	b->signForm(*f1);
	std::cout << "PRESIDENT" << std::endl;
	PresidentialPardonForm *pre = new PresidentialPardonForm("Babaluh");
	b->signForm(*pre);
//	displayInfo();
	delete f1;
	delete b;
//	delete f2;
	return (0);
}
