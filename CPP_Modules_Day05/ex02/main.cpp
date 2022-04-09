#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	ShrubberyCreationForm s("Shrubbery");
	RobotomyRequestForm r("Robotomy");
	PresidentialPardonForm p("Presidential Pardon");

	Bureaucrat bob("Bob", 17);
	Bureaucrat jim("Jim", 2);

	try {bob.signAForm(s);}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {s.execute(jim);}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-------------------------" << std::endl;
	try { r.beSigned(jim); }
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try { r.execute(bob); }
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "-------------------------" << std::endl;
	try {bob.signAForm(p); }
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try { jim.executeAForm(p); }
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	return (0);
}
