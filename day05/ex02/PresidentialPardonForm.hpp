#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <iostream>
class PresidentialPardonForm: public Form
{
private:
	std::string _target;
public:
//	class GradeTooHighException:public std::exception {
//		virtual const char * what() const throw();
//	};
//	class GradeTooLowException:public std::exception {
//		virtual const char * what() const throw();
//	};
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	virtual	void	execute(const Bureaucrat &executor) const;
};


#endif