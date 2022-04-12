#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>

#include "Form.hpp"

//class Form;
class	Intern
{
private:
	std::string a;
public:
	Intern();
	~Intern();
	Intern(const Intern &rhs);
	Intern	&operator=(const Intern &rhs);
	class NotSignForm:public std::exception
	{
	public:
		virtual const char * what() const throw();
	};
	Form	*makeForm(const std::string &nameForm, const std::string &targetForm);
};
#endif