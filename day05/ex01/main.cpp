#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
int main()
{
	std::cout << "FIRST CASE\n" << std::endl;
	Form	*form = new Form("CDO",false, 1, 1);
	Bureaucrat *f1 = new Bureaucrat("John", -1);
	try
	{
//		f1->decGrade();
		f1->incGrage();
		f1->signForm(*form);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
//	std::cout << "SECOND CASE\n" << std::endl;
//	Bureaucrat *f2 = new Bureaucrat("Karl", 150);
//	try
//	{
//		f2->incGrage();
//		f2->decGrade();
//		f2->signForm(*form);
//	}
//	catch (std::exception &e)
//	{
//		std::cerr << e.what() << std::endl;
//	}
//	std::cout << *form << std::endl;
//	std::cout << "THIRD CASE\n" << std::endl;
//	std::cout << "FOURTH CASE\n" << std::endl;
//	delete f1;
//	delete f2;
//	delete form;
	return (0);
}
