#include "Fixed.hpp"


Fixed::Fixed()
{
	this->fixedPointNumber = 0;
	std::cout << CYAN << "Default constructor called" << RESET << std::endl;
	return;
}

Fixed::Fixed(const int i)
{
	this->fixedPointNumber = i << bits;
	std::cout << CYAN << "Constructor called with int value " << RESET << i << std::endl;
	return;
}

Fixed::Fixed(const float f)
{
	this->fixedPointNumber = (int)roundf(f * (1 << bits));
	std::cout << CYAN << "Constructor called with float value " << RESET << f << std::endl;
	return;
}

Fixed::Fixed(const Fixed &rhs)
{
	this->fixedPointNumber = rhs.getRawBits();
	std::cout << CYAN << "Copy constructor called" << RESET << std::endl;
	return;
}

Fixed	&Fixed::operator=(const Fixed &rhs)
{
	std::cout << CYAN << "Copy assignment operator called" << RESET << std::endl;

	this->fixedPointNumber = rhs.getRawBits();

	return *this;
}

//comparison operators
	bool	Fixed::operator>(const Fixed &rhs)
	{
		std::cout << CYAN << "> operator called" << RESET << std::endl;

		return (this->getRawBits() > rhs.getRawBits());
	}

	bool	Fixed::operator<(const Fixed &rhs)
	{
		std::cout << CYAN << "< operator called" << RESET << std::endl;

		return (this->getRawBits() < rhs.getRawBits());
	}

	bool	Fixed::operator>=(const Fixed &rhs)
	{
		std::cout << CYAN << ">= operator called" << RESET << std::endl;

		return (this->getRawBits() >= rhs.getRawBits());
	}

	bool	Fixed::operator<=(const Fixed &rhs)
	{
		std::cout << CYAN << "<= operator called" << RESET << std::endl;

		return (this->getRawBits() <= rhs.getRawBits());
	}

	bool	Fixed::operator==(const Fixed &rhs)
	{
		std::cout << CYAN << "== operator called" << RESET << std::endl;

		return (this->getRawBits() == rhs.getRawBits());
	}

	bool	Fixed::operator!=(const Fixed &rhs)
	{
		std::cout << CYAN << "!= operator called" << RESET << std::endl;

		return (this->getRawBits() != rhs.getRawBits());
	}


	//arithmetic operators
	Fixed	Fixed::operator+(const Fixed &rhs)
	{
		Fixed	res(*this);

		std::cout << CYAN << "+ operator called for values " << RESET << this->getRawBits() <<
		" and " << rhs.getRawBits() << std::endl;
		res.setRawBits(this->getRawBits() + rhs.getRawBits());

		return res;
	}

	Fixed	Fixed::operator-(const Fixed &rhs)
	{
		Fixed	res(*this);

		std::cout << CYAN << "- operator called for values " << RESET << this->getRawBits() <<
		" and " << rhs.getRawBits() << std::endl;
		res.setRawBits(this->getRawBits() - rhs.getRawBits());

		return res;
	}

	Fixed	Fixed::operator*(const Fixed &rhs)
	{
		Fixed	res(*this);

		std::cout << CYAN << "* operator called for values " << RESET << this->getRawBits() <<
		" and " << rhs.getRawBits() << std::endl;

		res.fixedPointNumber = (this->fixedPointNumber * rhs.fixedPointNumber) >> bits;

		return res;
	}

	Fixed	Fixed::operator/(const Fixed &rhs)
	{
		Fixed	res(*this);

		std::cout << CYAN << "/ operator called for values " << RESET << this->getRawBits() <<
		" and " << rhs.getRawBits() << std::endl;

		if (rhs.fixedPointNumber)
		{
			res.fixedPointNumber = (this->fixedPointNumber / rhs.fixedPointNumber) * (1 << bits);
			return res;
		}
		else
		{
			std::cout << RED << "Impossible to devide by 0" << RESET << std::endl;
			return (Fixed(0));
		}
	}


	//increment/decrement operators
	Fixed	&Fixed::operator++()
	{
		std::cout << "post-increment operator called for value " << this->getRawBits() << std::endl;
		this->fixedPointNumber++;

		return *this;
	}

	Fixed	&Fixed::operator--()
	{
		std::cout << "post-decrement operator called for value " << std::endl;
		this->fixedPointNumber--;

		return *this;
	}

	Fixed	Fixed::operator++(int)
	{
		std::cout << "pre-increment operator called for value " << std::endl;
		Fixed	tmp(*this);
		operator++();
		return tmp;
	}

	Fixed	Fixed::operator--(int)
	{
		std::cout << "pre-decrement operator called for value " << std::endl;
		Fixed	tmp(*this);
		operator--();
		return tmp;
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
	float	res;

	res = (float)this->fixedPointNumber / (float)(1 << bits);
	return res;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a.getRawBits() > b.getRawBits() ? a : b);
}


std::ostream & operator<<( std::ostream & o, const Fixed &rhs)
{
	o << rhs.toFloat();
	return o;
}
