#include "Fixed.hpp"


Fixed::Fixed()
{
	this->fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const Fixed &rhs)
{
	this->fixedPointNumber = rhs.getRawBits();
	std::cout << "Copy constructor called" << std::endl;
	return;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointNumber = rhs.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointNumber;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "SetRawBits member function called" << std::endl;
	this->fixedPointNumber = raw;
	return;
}
