#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrumbberyCreationForm: public Form
{
public:
	ShrumbberyCreationForm(std::string &target);
	~ShrumbberyCreationForm();
	ShrumbberyCreationForm(const ShrumbberyCreationForm &rhs);
	ShrumbberyCreationForm	&operator=(const ShrumbberyCreationForm &rhs);
};



#endif