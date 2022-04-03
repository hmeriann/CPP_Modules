#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weaponType = NULL;
}

HumanB::~HumanB(void){}

std::string	HumanB::getName(void)
{
	return this->_name;
}

void		HumanB::setName(std::string name)
{
	this->_name = name;
}

void		HumanB::setWeapon(Weapon &club)
{
	this->_weaponType = &club;
}

void		HumanB::attack(void)
{
	if (!this->_weaponType->getType().empty())
		std::cout << MAGENTA << this->_name << " attacks with their " << BOLDWHITE << this->_weaponType->getType() << RESET << std::endl;
}
