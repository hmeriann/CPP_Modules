#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "š© Default Dog constructor is called\n" << std::endl;
	
	type = "Dog";
	return;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "š¶ Copy constructor is called for Dog" << std::endl;
	
	*this = dog;
	return;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "š Assignment overload is called for Dog" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


Dog::~Dog()
{
	std::cout << "\nš­ Destructor is called for Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Barrrrk-bark!!! š¢ š©\n" << std::endl;
}
