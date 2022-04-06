#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "🐈 Default Cat constructor is called\n" << std::endl;
	
	type = "Cat";
	return;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "😻 Copy constructor is called for Cat" << std::endl;
	
	*this = cat;
	return;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	std::cout << "😼 Assignment overload is called for Cat" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "\n🙀 Destructor is called for Cat" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meowwwwww!!! 📢 🐈\n" << std::endl;
}
