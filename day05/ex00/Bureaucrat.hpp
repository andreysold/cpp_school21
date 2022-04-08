#ifndef BUREAUCRAT_HPP_
#define BUREAUCRAT_HPP_
#include <exception>
#include <iostream>
class Bureaucrat
{
private:
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
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat	&operator=(const Bureaucrat &other);
	std::string getName() const;
	int getGrade() const;
//	void	setGrage(void); // ?
	void	incGrage(void);
	void	decGrade(void);
};


#endif