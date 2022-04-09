#include "Intern.hpp"

int main() {
	Intern intern;
	AForm *form;
	Bureaucrat bob("Bob", 3);

	form = intern.makeForm("RobotomyRequestForm", "Bender");
	form = intern.makeForm("ShrubberyCreationForm", "Bender");
	form = intern.makeForm("PresidentialPardonForm", "Bender");
	form = intern.makeForm("Shrubbery Creation Form", "Bender");
	if (!form)
		return (0);
	bob.signAForm(*form);
	bob.executeAForm(*form);
	delete form;
	return (0);
}
