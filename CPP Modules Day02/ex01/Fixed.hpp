#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					fixedPointNumber;
	static const int	bits = 8;
public:
	//default
	Fixed();

	Fixed(const int i);
	Fixed(const float f);

	//copy
	Fixed(const Fixed &rhs);

	//copy assigment
	Fixed	&operator=(const Fixed &rhs);

	//destructor
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	float	toInt( void ) const;
};

std::ostream & operator<<( std::ostream & o, const Fixed &rhs);

#endif
