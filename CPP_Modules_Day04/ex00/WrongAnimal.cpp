#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\nš Default WrongAnimal constructor is called" << std::endl;
	
	this->type = "Unknown WrongAnimal";
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	std::cout << "š¤ Copy constructor is called for WrongAnimal" << std::endl;
	
	*this = WrongAnimal;
	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "š¤Æ Assignment overload is called for WrongAnimal" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "š„¶ Destructor is called for WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "š¢ WrongAnimal makes some noise!\n" << std::endl;
}
