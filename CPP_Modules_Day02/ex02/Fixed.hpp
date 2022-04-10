#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
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

	//comparison operators
	bool	operator>(const Fixed &rhs);
	bool	operator<(const Fixed &rhs);
	bool	operator>=(const Fixed &rhs);
	bool	operator<=(const Fixed &rhs);
	bool	operator==(const Fixed &rhs);
	bool	operator!=(const Fixed &rhs);

	//arithmetic operators
	Fixed	operator+(const Fixed &rhs);
	Fixed	operator-(const Fixed &rhs);
	Fixed	operator*(const Fixed &rhs);
	Fixed	operator/(const Fixed &rhs);

	//increment/decrement operators
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	//destructor
	~Fixed();

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float	toFloat( void ) const;
	float	toInt( void ) const;

	static Fixed	&min(Fixed &a, Fixed &b);
	static Fixed	min(const Fixed &a, const Fixed &b);
	static Fixed	&max(Fixed &a, Fixed &b);
	static Fixed	max(const Fixed &a, const Fixed &b);
};

std::ostream & operator<<( std::ostream & o, const Fixed &rhs);

#define RESET	"\033[0m"
#define BLACK	"\033[30m"		/* Black */
#define RED		"\033[31m"		/* Red */
#define GREEN	"\033[32m"		/* Green */
#define YELLOW	"\033[33m"		/* Yellow */
#define BLUE	"\033[34m"		/* Blue */
#define MAGENTA	"\033[35m"		/* Magenta */
#define CYAN	"\033[36m"		/* Cyan */
#define WHITE	"\033[37m"		/* White */
#endif
