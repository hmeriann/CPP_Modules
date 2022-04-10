#include "sample.class.hpp"

Sample::Sample(void) {
	std::cout << BLUE << "Constructor called" << RESET << std::endl;

	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();

	std::cout << YELLOW << "*******" << RESET << std::endl;

	return;
}

Sample::~Sample(void) {
	std::cout << RED << "Destructor called" << RESET << std::endl;
	return;
}


void	Sample::publicBar(void) const {
	std::cout << GREEN << "Member function publicBar called" << RESET << std::endl;
	return;
}

void	Sample::_privateBar(void) const {
	std::cout << "Member function _privateBar called" << std::endl;
	return;
}
