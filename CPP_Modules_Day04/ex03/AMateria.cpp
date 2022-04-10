#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	std::cout << "\n 💠 Copy constructor is called for Abstract Materia" << std::endl;
	
	this->type = "Unknown Abstract Materia";
	return;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	std::cout << "💠 = ⚪️ Assignment overload is called for Abstract Materia" << std::endl;
	
	if (this != &rhs)
		this->type = rhs.type;

	return *this;
}

AMateria::~AMateria()
{
	std::cout << "🌪 Destructor is called for Abstract Materia" << std::endl;

}

std::string const & AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{

}

AMateria::AMateria()
{

}