#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include "Form.hpp"
ShrumbberyCreationForm::ShrumbberyCreationForm(std::string target)
:Form("DefaultShrumForm", false, 145, 137), _target(target){};

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

