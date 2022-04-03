#include "HumanA.hpp"

HumanA::HumanA(std::string	name, Weapon &weaponType): _weaponType(weaponType)
{
	this->_name = name;
}

HumanA::~HumanA(){}

Weapon	HumanA::getWeaponType(void)
{
	return this->_weaponType;
}

void	HumanA::setWeaponType(std::string &weaponType)
{
	this->_weaponType = weaponType;
}

std::string	HumanA::getName(void)
{
	return this->_name;
}

void	HumanA::setName(std::string name)
{
	this->_name = name;
}

void	HumanA::attack(void)
{
	std::cout << RED << this->_name << " attacks with their " << BOLDWHITE << this->_weaponType.getType() << RESET << std::endl;
}
