#include "comparison.class.hpp"

Sample::Sample( int v ): _foo( v ) {

	std::cout << GREEN << "Constructor is called" << RESET << std::endl;
	return;
}

Sample::~Sample( void ) {

	std::cout << MAGENTA << "Destructor is called" << RESET << std::endl;
}

int	Sample::getFoo( void ) const {
	return this->_foo;
}

int	Sample::compare( Sample *other ) const {
	if ( this->_foo < other->getFoo() )
		return -1;
	else if ( this->_foo > other->getFoo() )
		return 1;

	return 0;

}
