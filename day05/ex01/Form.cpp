#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>




Form::Form():_gradeExecute(0), _gradeSign(0)
{
	std::cout << "Form constructor called" << std::endl;
};

Form::Form(std::string name, bool checker, int gradeSign, int gradeExecute)
: _name(name), _checker(checker), _gradeSign(gradeSign), _gradeExecute(gradeExecute)
{
	if (this->_gradeSign < 1 || this->_gradeExecute < 1)
		throw GradeTooHighException();
	if (this->_gradeExecute > 150 || this->_gradeSign > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called" << std::endl;
};

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
};

Form::Form(const Form &rhs):_gradeSign(rhs._gradeSign), _gradeExecute(rhs._gradeExecute), _name(rhs._name), _checker(rhs._checker)
{
	std::cout << "Copy constructor called" << std::endl;
};

Form	&Form::operator=(const Form &rhs)
{
	std::cout << "Form assigment operator called" << std::endl;
	(*this)._checker = rhs._checker;
	return (*this);
};

std::ostream &operator<<(std::ostream &out, const Form &rhs)
{
	out << " ";
	return (out);
};

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Form: Exception: grade too high");
};

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Form: Exception: grade to low");
};

void	Form::beSigned(const Bureaucrat &a)
{
	if (h.getGrade() <= this->_gradeExecute)
		this->_checker = true;
	else
		GradeTooLowException();
};
