#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void)
{
	std::cout << "🐩 Default Dog constructor is called\n" << std::endl;
	
	this->type = "Dog";
	this->dogsBrain = new Brain;
	return;
}

Dog::Dog(const Dog &dog)
{
	std::cout << "🐶 Copy constructor is called for Dog" << std::endl;
	
	this->type = dog.type;
	this->dogsBrain = new Brain;
	for (size_t i = 0; i < 100; i++)
		this->setDogsIdea(dog.dogsBrain->getIdea(i), i);
	
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
	delete this->dogsBrain;
}

void	Dog::makeSound() const
{
	std::cout << "Barrrrk-bark!!! 📢 🐩\n" << std::endl;
}

std::string	Dog::getDogsIdea(int i)
{
	return dogsBrain->getIdea(i);
}

void	Dog::setDogsIdea(std::string dogsIdea, int i)
{
	dogsBrain->setIdea(dogsIdea, i);
}