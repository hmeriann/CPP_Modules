#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default constructor of Cat is called 🐈 \n" << std::endl;
	return;
}

Cat::Cat(/* args */) : Animal
{
}

Cat::~Cat()
{
	std::cout << "Destructor of Cat is called 🙀 \n" << std::endl;
	return;
}