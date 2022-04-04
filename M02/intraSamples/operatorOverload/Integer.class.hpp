#ifndef INTEGER_CLASS_HPP
# define INTEGER_CLASS_HPP

#include <iostream>

class Integer
{
private:
	int	_n;
public:
	Integer( int const n);
	~Integer();

	int	getValue(void) const;

	Integer &	operator=( Integer const & rhs);
	Integer		operator+( Integer const & rhs) const;
};

std::ostream & operator<<( std::ostream & o, Integer const & rhs);


#endif
