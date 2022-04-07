#include "member.class.hpp"

void	f0( void ) {

	Sample	instance;

	std::cout << CYAN << "Number of instances :" << Sample::getNoInst() << RESET << std::endl;

	return;
}

void	f1( void ) {

	Sample	instance;

	std::cout << BLUE << "Number of instances :" << Sample::getNoInst() << RESET << std::endl;
	f0();

	return;
}

int	main() {

	std::cout << "Number of instances : " << Sample::getNoInst() << std::endl;
	f1();
	std::cout << "Number of instances : " << Sample::getNoInst() << std::endl;

	return 0;
}
