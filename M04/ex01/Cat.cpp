#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "🐈 Default Cat constructor is called\n" << std::endl;
	
	this->type = "Cat";
	this->catsBrain = new Brain;
	return;
}

Cat::Cat(const Cat &cat)
{
	std::cout << "😻 Copy constructor is called for Cat" << std::endl;
	
	this->type = cat.type;
	this->catsBrain = new Brain;
	for (size_t i = 0; i < 100; i++)
		this->setCatsIdea(cat.catsBrain->getIdea(i), i);

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
	delete this->catsBrain;
}

void	Cat::makeSound() const
{
	std::cout << "Meowwwwww!!! 📢 🐈\n" << std::endl;
}

std::string	Cat::getCatsIdea(int i)
{
	return catsBrain->getIdea(i);
}

void	Cat::setCatsIdea(std::string catsIdea, int i)
{
	catsBrain->setIdea(catsIdea, i);
}