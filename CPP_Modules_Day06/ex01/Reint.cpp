#include "Reint.hpp"

//It takes a pointer and converts it to the unsigned integer type uintptr_t.
uintptr_t serialize(Data* ptr)
{
	uintptr_t	curr_ptr;

	curr_ptr = reinterpret_cast<uintptr_t>(ptr);
	return curr_ptr;
}

//It takes an unsigned integer parameter and converts it to a pointer to Data.
Data* deserialize(uintptr_t raw)
{
	Data	*data;

	data = reinterpret_cast<Data *>(raw);
	return data;
}
