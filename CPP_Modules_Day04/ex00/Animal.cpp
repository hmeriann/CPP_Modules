#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "\nš Default Animal constructor is called" << std::endl;
	
	this->type = "Unknown Animal";
	return;
}

Animal::Animal(const Animal &animal)
{
	std::cout << "š¤ Copy constructor is called for Animal" << std::endl;
	
	*this = animal;
	return;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	std::cout << "š¤Æ Assignment overload is called for Animal" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "š„¶ Destructor is called for Animal" << std::endl;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << "š¢ Animal makes some noise!\n" << std::endl;
}
