#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "\n<^ . ^> Default Abstract Animal constructor is called" << std::endl;
	
	this->type = "Unknown Abstract Animal";
	return;
}

AAnimal::AAnimal(const AAnimal &AAnimal)
{
	std::cout << "<0 . 0> Copy constructor is called for Abstract Animal" << std::endl;
	
	*this = AAnimal;
	return;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "<= . =>  Assignment overload is called for Abstract Animal" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "<x . x> Destructor is called for Abstract Animal" << std::endl;
}

std::string	AAnimal::getType() const
{
	return type;
}
