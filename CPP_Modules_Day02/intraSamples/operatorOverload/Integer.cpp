#include "Integer.class.hpp"

Integer::Integer(int const n): _n(n) {
	std::cout << "Constructor called with the value " << n << std::endl;
	return;
}

Integer::~Integer() {
	std::cout << "Destructor called with the value " << this->_n << std::endl;
	return;
}

int	Integer::getValue(void) const {
	return	this->_n;
}

//rhs == right hand side
Integer &		Integer::operator=( Integer const & rhs) //will return the ref to the instance
{
	std::cout << "Assignation operator called from  " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n = rhs.getValue();

	return *this;
}

Integer			Integer::operator+( Integer const & rhs) const// will return acopy of the result
{
	std::cout << "Assignation operator called from  " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;
	return Integer( this->_n + rhs.getValue() );
}

std::ostream &	operator<<( std::ostream & o, Integer const & rhs)
{
	o << rhs.getValue();
	return o;
}
