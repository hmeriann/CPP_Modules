#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "š Default Cat constructor is called\n" << std::endl;
	
	type = "Cat";
	return;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "š» Copy constructor is called for Cat" << std::endl;
	
	*this = cat;
	return;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "š¼ Assignment overload is called for Cat" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "\nš Destructor is called for Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meowwwwww!!! š¢ š\n" << std::endl;
}
