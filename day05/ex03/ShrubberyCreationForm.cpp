#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Form.hpp"
#include <fstream>

ShrumbberyCreationForm::ShrumbberyCreationForm(std::string target)
:Form("ShrubberyCreationFrom", false, 145, 137), _target(target){};

ShrumbberyCreationForm::ShrumbberyCreationForm(): Form("ShrubberyCreationFrom", false, 150, 150) {}
ShrumbberyCreationForm::~ShrumbberyCreationForm(){};

ShrumbberyCreationForm::ShrumbberyCreationForm(const ShrumbberyCreationForm &rhs):Form(rhs), _target(rhs._target) {};

ShrumbberyCreationForm	&ShrumbberyCreationForm::operator=(const ShrumbberyCreationForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
};

void	ShrumbberyCreationForm::displayInfo()
{
	std::cout << this->getGradeExecute() << std::endl;
	std::cout << this->getGradeSign() << std::endl;
	std::cout << this->_target << std::endl;
};

void	ShrumbberyCreationForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::ofstream file((this->_target + "_shrubbery").c_str());
	file << "              v .   ._, |_  .,\n"
			"           `-._\\/  .  \\ /    |/_\n"
			"               \\\\  _\\, y | \\//\n"
			"         _\\_.___\\\\, \\\\/ -.\\||\n"
			"           `7-,--.`._||  / / ,\n"
			"           /'     `-. `./ / |/_.'\n"
			"                     |    |//\n"
			"                     |_    /\n"
			"                     |-   |\n"
			"                     |   =|\n"
			"                     |    |\n"
			"--------------------/ ,  . \\--------._";
	file.close();
}

std::string ShrumbberyCreationForm::getTarget() const {return _target;};

std::ostream& operator<<(std::ostream &out, ShrumbberyCreationForm const &rhs)
{
	out << "ShrumbberyCreationForm target is ";
	out << rhs.getTarget();
	return (out);
};
