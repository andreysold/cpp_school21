#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main()
{
	Bureaucrat *b = new Bureaucrat("Zhopa", 45);
	RobotomyRequestForm *f1 = new RobotomyRequestForm("Zloy");
//	ShrumbberyCreationForm *f2 = new ShrumbberyCreationForm("KEKA");

	b->signForm(*f1);
//	displayInfo();
	delete f1;
//	delete f2;
	return (0);
}
