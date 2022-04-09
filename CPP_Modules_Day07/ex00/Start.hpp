#ifndef START_HPP
#define START_HPP

#include <iostream>

template< typename T >
void	swap( T & a, T & b){
	if (a != b)
	{
		T	tmp = a;
		a = b;
		b = tmp;
	}
}

template< typename T >
T const & min( T const & x, T const & y) {
	return ((x < y) ? x : y);
}

template< typename T >
T const & max( T const & x, T const & y) {
	return ((x > y) ? x : y);
}

#endif
