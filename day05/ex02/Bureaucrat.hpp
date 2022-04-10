#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <iostream>
#include <fstream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class Form;
class Bureaucrat
{
private:
	Bureaucrat();
	const std::string _name;
	int _grade;
public:
	class GradeTooHighException:public std::exception
	{
		virtual const char * what() const throw();
	};
	class GradeTooLowException:public std::exception
	{
		virtual const char * what() const throw();
	};
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat	&operator=(const Bureaucrat &other);
	std::string getName() const;
	int getGrade() const;
	void	displayInfo(void) const;
//	void	setGrage(void); // ?
	void	incGrage(void);
	void	decGrade(void);
	void	signForm(Form &form);
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &rhs);
#endif