#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {};

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	try {
		if (this->_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &el)
	{
		std::cerr << el.what() << std::endl;
	}

};

Bureaucrat::~Bureaucrat() {};

Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name)
{
	(*this) = other;
};

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	return (*this);
};

std::string Bureaucrat::getName() const
{
	return this->_name;
};

int Bureaucrat::getGrade() const
{
	return this->_grade;
};

void	Bureaucrat::incGrage(void)
{
	this->_grade--;
	if (this->_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooHighException();
};

void	Bureaucrat::decGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: <Grade too high>");
};

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: <Grade to low>");
};

void	Bureaucrat::displayInfo() const
{
	std::cout << this->_name << std::endl;
	std::cout << this->_grade << std::endl;
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs)
{
	out << rhs.getName() << " , bureaucrat grade " << rhs.getGrade();
	return (out);
};

void	Bureaucrat::signForm(Form &form)
{
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	}
	catch (Form::GradeTooLowException &ex)
	{
		std::cerr << this->getName() << " couldn't signed form, because ";
		std::cerr << ex.what() << std::endl;
	}
};

void	Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &bx)
	{
		std::cerr << bx.what() << std::endl;
	}
	catch (Form::NotSigned &fe)
	{

		std::cerr << this->getName() << " couldn't execute " << form.getName()
				  << " because " << fe.what() << std::endl;
	}

}