#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template< typename T >
void	printPlusTen(T &i)
{
	std::cout << "Print arr[i] " << static_cast<int>(i) << " + 10 = ";
	i = i + 10;
	std::cout << static_cast<int>(i) << std::endl;
}

template< typename T >
void	printUpper(T &i)
{
	std::cout << "Print arr[i] " << i << " uppercase : "
			<< toupper(i) << std::endl;
}

template< typename T >
void	iter(T *arr, int size, void (*func)(T &arg))
{
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}



#endif
