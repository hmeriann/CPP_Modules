#ifndef REINT_HPP
#define REINT_HPP

#include <iostream>

struct	Data
{
	int			dataInt;
	std::string	dataString;
};


uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif
