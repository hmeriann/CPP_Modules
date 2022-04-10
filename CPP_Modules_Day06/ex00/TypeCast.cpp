#include "TypeCast.hpp"

TypeCast &TypeCast::operator =(const TypeCast &rhs)
{
	if (this == &rhs)
		return *this;
	else
		this->str_ = rhs.str_;

	return *this;
}

void TypeCast::to_char()
{
	int c;

	try
	{
		c = static_cast<char>(stoi(str_));
	}
	catch(std::invalid_argument& e)
	{
		std::cerr << "Cast to CHAR is impossible" << '\n';
		return;
	}
	catch(std::out_of_range& e)
	{
		std::cerr << "Cast to CHAR is impossible" << '\n';
		return;
	}
	if (c < -128 || c > 127)
	{
		std::cerr << "Cast to CHAR is impossible" << '\n';
		return;
	}
	if (!isprint(c))
	{
		std::cerr << "CHAR : Non displayable" << '\n';
		return;
	}
	std::cout << "CHAR : " << static_cast<char>(c) << '\n';
}

void TypeCast::to_int()
{
	int i;

	try
	{
		i = static_cast<int>(stoi(str_));
	}
	catch(std::invalid_argument& e)
	{
		std::cerr << "Cast to INT is impossible" << '\n';
		return;
	}
	catch(std::out_of_range& e)
	{
		std::cerr << "Cast to INT is impossible" << '\n';
		return;
	}
	std::cout << "INT : " << i << '\n';
}

void TypeCast::to_double()
{
	double d;

	try
	{
		d = static_cast<double>(stod(str_));
	}
	catch(std::invalid_argument& e)
	{
		std::cerr << "Cast to DOUBLE is impossible : nan" << '\n';
		return;
	}
	catch(std::out_of_range& e)
	{
		std::cerr << "Cast to DOUBLE is impossible" << '\n';
		return;
	}
	std::cout << "DOUBLE : " << d << '\n';
}

void TypeCast::to_float()
{
	float f;
	try
	{
		f = static_cast<float>(stof(str_));
	}
	catch(std::invalid_argument& e)
	{
		std::cerr << "Cast to FLOAT is impossible : nanf" << '\n';
		return;
	}
	catch(std::out_of_range& e)
	{
		std::cerr << "Cast to FLOAT is impossible" << '\n';
		return;
	}
	std::cout << std::fixed << std::showpoint << std::setprecision(1);
	std::cout << "FLOAT : " << f << "f" << '\n';
}


