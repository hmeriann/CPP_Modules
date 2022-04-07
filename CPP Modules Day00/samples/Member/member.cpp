#include "member.class.hpp"

Sample::Sample( void ) {

	std::cout << "Constructor is called" << std::endl;
	Sample::_nbInst += 1;

	return;
}

Sample::~Sample( void ) {

	std::cout << "Destructor is called" << std::endl;
	Sample::_nbInst -= 1;

	return;
}

int	Sample::getNoInst( void ) {

	return Sample::_nbInst;
}

int	Sample::_nbInst = 0; //non-member attribute initialisation is outside the class
