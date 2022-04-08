#include "Form.hpp"

int main() {
	try {
		Form A0("A", 0, 10);
		std::cout << A0 << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Form A151("A", 151, 10);
		std::cout << A151 << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Form A0_1("A",45, 0);
		std::cout << A0_1 << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		Form A151_1("A", 15, 151);
		std::cout << A151_1 << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;
	Form A("A", 15, 10);
	std::cout << A << std::endl;
	Bureaucrat bob("Bob", 16);
	try {
		A.beSigned(bob);
		std::cout << A << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	bob.decrementGrade();
	try {
		A.beSigned(bob);
		std::cout << A << std::endl;
	}
	catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}

	std::cout << "---------------------------" << std::endl;
	Form C("C", 22, 4);
	std::cout << C << std::endl;
	Bureaucrat jim("Jim", 23);
	std::cout << jim << std::endl;
	jim.signForm(C);
	jim.decrementGrade();
	std::cout << jim << std::endl;
	jim.signForm(C);
	std::cout << C << std::endl;


}
