#include "Fixed.hpp"


Fixed::Fixed()
{
	this->fixedPointNumber = 0;
	std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int i)
{
	this->fixedPointNumber = i << bits;
	std::cout << "Constructor called with int value " << i << std::endl;
	return;
}

Fixed::Fixed(const float f)
{
	this->fixedPointNumber = (int)roundf(f * (1 << bits));
	std::cout << "Constructor called with float value " << f << std::endl;
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
	std::cout << "Destructor called with value " << this->fixedPointNumber << std::endl;
	// return;
}

int Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointNumber;
}

void Fixed::setRawBits( int const raw )
{
	// std::cout << "SetRawBits member function called" << std::endl;
	this->fixedPointNumber = raw;
	// return;
}

float	Fixed::toInt( void ) const
{
	return this->fixedPointNumber / (1 << bits);
}

float	Fixed::toFloat( void ) const
{
	return (float)this->fixedPointNumber / (float)(1 << bits);
}

std::ostream & operator<<( std::ostream & o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return o;
}
