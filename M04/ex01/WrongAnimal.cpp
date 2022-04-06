#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "\n🙃 Default WrongAnimal constructor is called" << std::endl;
	
	this->type = "Unknown WrongAnimal";
	return;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	std::cout << "🤓 Copy constructor is called for WrongAnimal" << std::endl;
	
	*this = WrongAnimal;
	return;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "🤯 Assignment overload is called for WrongAnimal" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "🥶 Destructor is called for WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "📢 WrongAnimal makes some noise!\n" << std::endl;
}
