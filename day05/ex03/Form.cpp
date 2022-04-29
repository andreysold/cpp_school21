#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <fstream>

class Bureaucrat;

Form::Form(): _gradeSign(150), _gradeExecute(150) {};

Form::Form(std::string name, bool checker, int gradeSign, int gradeExecute)
: _name(name), _checker(checker), _gradeSign(gradeSign), _gradeExecute(gradeExecute) {
	try {
		if (this->_gradeSign < 1 || this->_gradeExecute < 1)
			throw Form::GradeTooHighException();
		if (this->_gradeExecute > 150 || this->_gradeSign > 150)
			throw Form::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
};

Form::~Form() {};

Form::Form(const Form &rhs): _name(rhs._name), _checker(rhs._checker), _gradeSign(rhs._gradeSign), _gradeExecute(rhs._gradeExecute) {};

Form	&Form::operator=(const Form &rhs) {
	std::cout << "Form assigment operator called" << std::endl;
	(*this)._checker = rhs._checker;
	return (*this);
};

std::ostream &operator<<(std::ostream &out, const Form &rhs) {
	out << "Name: " << rhs.getName() << "\n" << "Status: " << rhs.getStatus()
	<< "\n" << "GradeExecute: " << rhs.getGradeExecute() << "\n"
	<< "GradeSign: " << rhs.getGradeSign() << std::endl;
	return (out);
};

const char *Form::GradeTooHighException::what() const throw() {
	return ("FormException: <Grade too high>");
};

const char *Form::GradeTooLowException::what() const throw() {
	return ("FormException: <Grade to low>");
};

const char *Form::NotSigned::what() const throw()
{
	return ("Form not singed");
}
void	Form::beSigned(Bureaucrat &h) {
//		std::cout << "AAAA" << std::endl;
		if (h.getGrade() <= this->_gradeSign && h.getGrade() > 0)
			this->_checker = true;
		else {
			throw Form::GradeTooLowException();
		}
};

std::string	Form::getName() const {
	return _name;
};

bool Form::getStatus() const {
	return _checker;
};

int	Form::getGradeExecute() const {
	return _gradeExecute;
};

int Form::getGradeSign() const {
	return _gradeSign;
};

void	Form::execute(const Bureaucrat &executor) const
{
		try {
			if (executor.getGrade() > this->_gradeSign && this->_gradeSign > 0) {
				throw Bureaucrat::GradeTooLowException();
			}
			if (!this->_checker) {
				throw Form::NotSigned();
			}
		}
		catch (Bureaucrat::GradeTooLowException &bx)
		{
			std::cerr << executor.getName() << " couldn't execute " << this->getName() << " because " << bx.what()  << std::endl;
		}
		catch (Form::NotSigned &fe)
		{
			std::cerr << this->getName() << " couldn't execute " << this->getName()
					  << " because " << fe.what() << std::endl;
		}
}