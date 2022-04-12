#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("DefaultPresidentForm", false, 150, 150){};

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", false, 25,5 ), _target(target){};

PresidentialPardonForm::~PresidentialPardonForm() {};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &rhs): Form(rhs), _target(rhs._target) {};

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->_target = rhs._target;
	return (*this);
};

std::string PresidentialPardonForm::getTarget() const {return _target;};

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

std::ostream& operator<<(std::ostream &out, PresidentialPardonForm const &rhs)
{
	out << "PresidentialPardonForm target is ";
	out << rhs.getTarget();
	return (out);
};


