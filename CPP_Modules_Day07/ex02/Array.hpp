#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>
class Array
{
private:
	T	*data; 			// elements content
	unsigned int	n_; // elements count
public:
	Array();
	Array(unsigned int n);
	Array(const Array &arr);
	Array	&operator=(const Array &rhs);
	~Array();

	unsigned int	size() const;
	T &operator[](unsigned int i);
	// void	print(void)	const;
};

#include "Array.tpp"
#endif
