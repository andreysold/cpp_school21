#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
class ShrumbberyCreationForm: public Form
{
private:
	std::string _target;
public:
	ShrumbberyCreationForm();
	ShrumbberyCreationForm(std::string target);
	~ShrumbberyCreationForm();
	ShrumbberyCreationForm(const ShrumbberyCreationForm &rhs);
	ShrumbberyCreationForm	&operator=(const ShrumbberyCreationForm &rhs);
	virtual void	execute(const Bureaucrat &executor) const;
	void	displayInfo(void);
	std::string getTarget() const;

};

std::ostream& operator<<(std::ostream &out, ShrumbberyCreationForm const &rhs);

#endif