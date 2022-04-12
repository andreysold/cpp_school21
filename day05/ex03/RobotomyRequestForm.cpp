#include <iostream>
#include "RobotomyRequestForm.hpp"
#include <cmath>
#include <fstream>
RobotomyRequestForm::RobotomyRequestForm(std::string target)
:Form("RobotomyRequestForm",false,  72, 45), _target(target){};

RobotomyRequestForm::RobotomyRequestForm() :Form("DefaultRobotomyForm",false,  45, 72){};

RobotomyRequestForm::~RobotomyRequestForm(){};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs):Form(rhs), _target(rhs._target){};

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
};

void			RobotomyRequestForm::execute(const Bureaucrat &executor) const {

	Form::execute(executor);
	srand(time(NULL));
	if (rand() % 2)
		std::cout << "Success: " << this->_target << " has been robotomized successfully 50% of the time" << std::endl;
	else
		std::cout << "Failed: " << this->_target << " has not beem robotomized" << std::endl;
}

std::string 	RobotomyRequestForm::getTarget() const {return _target;};
std::ostream& operator<<(std::ostream &out, RobotomyRequestForm const &rhs)
{
	out << "RobotomyRequestForm target is ";
	out << rhs.getTarget();
	return (out);
};

