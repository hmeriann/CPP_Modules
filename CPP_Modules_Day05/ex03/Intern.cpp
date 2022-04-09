#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Default Intern constructor is called" << std::endl;
}

Intern::Intern(const Intern &form)
{
	std::cout << "Intern copy constructor is called"<< std::endl;

}

Intern &Intern::operator=(const Intern &rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Default Intern destructor is called" << std::endl;
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm	*form = NULL;
	std::string	forms[3] = {  "ShrubberyCreationForm"
							, "RobotomyRequestForm"
							, "PresidentialPardonForm"};
	int		i = 0;

	while (name != forms[i] && i < 3)
		i++;
	switch (i)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new PresidentialPardonForm(target);
		break;

	default:
		std::cout << RED << "There is no such of form type" << RESET << std::endl;
		return NULL;
	}
	std::cout << "\nIntern creates <" << GREEN << form->getName() << ">\n" << RESET << std::endl;
	return form;
}
