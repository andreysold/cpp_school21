#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
};

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
};

Bureaucrat::~Bureaucrat()
{
};

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
		this->_grade++;
		throw Bureaucrat::GradeTooHighException();
	}
};

void	Bureaucrat::decGrade(void)
{
	this->_grade++;
	if (this->_grade > 150) {
		this->_grade--;
		throw Bureaucrat::GradeTooLowException();
	}
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
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}