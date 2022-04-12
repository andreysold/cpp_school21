#include <iostream>
#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
int main()
{

	Bureaucrat	Jim("Jim", -99);
	Bureaucrat	Linda("Linda", 1);
	Bureaucrat	John("John", 150);

	ShrumbberyCreationForm	shrubberyForm("Home");
	std::cout << shrubberyForm << std::endl;
	RobotomyRequestForm		robotomyForm("Cat");
	std::cout << robotomyForm << std::endl;
	PresidentialPardonForm	presidentialForm("Linda");
	std::cout << presidentialForm << std::endl << std::endl;

	Jim.signForm(robotomyForm);
	robotomyForm.execute( Jim);
	shrubberyForm.execute(Jim);
	Jim.signForm(shrubberyForm);
	Jim.executeForm(shrubberyForm);
	John.executeForm(shrubberyForm);
	Linda.signForm(presidentialForm);
	Linda.executeForm(shrubberyForm);
	std::cout << std::endl;

	Linda.signForm(shrubberyForm);
	Linda.signForm(robotomyForm);
	Linda.signForm(presidentialForm);
	Linda.executeForm(shrubberyForm);
	Linda.executeForm(robotomyForm);
	Linda.executeForm(presidentialForm);
	std::cout << std::endl;

	John.signForm(robotomyForm);
	John.signForm(presidentialForm);
	John.executeForm(robotomyForm);
	John.executeForm(presidentialForm);
	return 0;
}
