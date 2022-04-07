#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
/**
 * From now on, all your classes must be designed in the Orthodox Canonical Form,
 * unless explicitely stated otherwise. Then, they will implement the four required member
 * functions below:
 * • Default constructor
 * • Copy constructor
 * • Copy assignment operator
 * • Destructor
 **/

class Fixed
{
private:
	int					fixedPointNumber;
	static const int	bits = 8;
public:
	Fixed();
//Copy constructor
	Fixed(const Fixed &rhs);
//Copy assignment operator overload
	Fixed	&operator=(const Fixed &rhs);
	~Fixed();
//returns the raw value of the fixed-point value
	int		getRawBits( void ) const;
//sets the raw value of the fixed-point number
	void	setRawBits( int const raw );
};

#endif
