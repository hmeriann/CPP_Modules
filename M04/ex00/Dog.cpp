#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "🐩 Default Dog constructor is called\n" << std::endl;
	
	type = "Dog";
	return;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "🐶 Copy constructor is called for Dog" << std::endl;
	
	*this = Dog;
	return;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	std::cout << "🐕 Assignment overload is called for Dog" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}


Dog::~Dog()
{
	std::cout << "\n🌭 Destructor is called for Dog" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Barrrrk-bark!!! 📢 🐩\n" << std::endl;
}
