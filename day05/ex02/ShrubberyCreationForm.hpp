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
	void	displayTree(void);
	void	displayInfo(void);

};



#endif