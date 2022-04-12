#include "Intern.hpp"

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"


Intern::Intern() {};
Intern::~Intern() {};
Intern::Intern(const Intern &rhs)
{
	(*this) = rhs;
};

Intern	&Intern::operator=(const Intern &rhs)
{
	(void) rhs;
	return (*this);
};


const char *Intern::NotSignForm::what() const throw()
{
	return ("InternException: <Not Form>");
};

Form	*Intern::makeForm(const std::string &nameForm, const std::string &targetForm)
{
	Form *newForm = NULL;
	Form	*arr[3] = {new RobotomyRequestForm(targetForm), new PresidentialPardonForm(targetForm),
					   new ShrumbberyCreationForm(targetForm)};
	for (int i = 0; i < 3; i++) {
		if (arr[i]->getName() == nameForm)
			newForm = arr[i];
		else
			delete arr[i];
	}
	try {
		if (newForm != NULL)
			std::cout << "Intern creates " << newForm->getName() << std::endl;
		else
			throw Intern::NotSignForm();
	}
	catch (Intern::NotSignForm &ex)
	{
		std::cerr << "Intern cant create " << newForm->getName() << " because" << ex.what() << std::endl;
	}
	return (newForm);
}
