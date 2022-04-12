#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>

class RobotomyRequestForm:public Form
{
private:
	std::string _target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	RobotomyRequestForm	&operator=(const RobotomyRequestForm &rhs);
	virtual void			execute(const Bureaucrat &executor) const;
	std::string getTarget(void) const;
};

std::ostream &operator<<(std::ostream &out, RobotomyRequestForm const &rhs);
#endif