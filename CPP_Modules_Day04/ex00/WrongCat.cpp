#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "š Default WrongCat constructor is called\n" << std::endl;
	
	type = "WrongCat";
	return;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
	std::cout << "š¾ Copy constructor is called for WrongCat" << std::endl;
	
	*this = WrongCat;
	return;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "š¤ Assignment overload is called for WrongCat" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "\nš¹ Destructor is called for WrongCat" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Rrrrrroooooaaarrrrrrr!!! š¢ š¦\n" << std::endl;
}
