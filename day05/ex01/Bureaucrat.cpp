#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
	std::cout << "Bureaucrat constructor called" << std::endl;
};

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat constructor called" << std::endl;
};

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &other):_name(other._name)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	(*this) = other;
};

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	this->_grade = other._grade;
	std::cout << "Bureaucrat assigment operator called" << std::endl;
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
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

}