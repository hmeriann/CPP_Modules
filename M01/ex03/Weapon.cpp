#include "Weapon.hpp"

// Weapon::Weapon(){}

Weapon::Weapon(std::string weaponType)
{
	setType(weaponType);
}

Weapon::~Weapon(){}

const std::string	&Weapon::getType(void)
{
	const	std::string	&typeREF = _type;
	return typeREF;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
