#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->name_ = "<UNKNOWN>";
	this->_energyPoints = ScavTrap().getEnergyPoints();
	this->_attackDamage = FragTrap::_attackDamage;
	this->_hitPoints = FragTrap::_hitPoints;
	
	std::cout << "Default constructor of DiamondTrap class object is called for name " << YELLOW << this->_name
		<< RESET << " with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name_ = ClapTrap::_name + "_clap_name";
	this->_energyPoints = ScavTrap().getEnergyPoints();
	this->_attackDamage = FragTrap::_attackDamage;
	this->_hitPoints = FragTrap::_hitPoints;

	std::cout << "🏗 Constructor of DiamondTrap class object is called for name [ " << GREEN << this->_name << RESET <<
		" ] with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) : ClapTrap(rhs) {}

DiamondTrap::~DiamondTrap()
{
	std::cout << CYAN << "Destructor of DiamondTrap class object is called for [ " << this->_name << " ]\n" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << CYAN << "Copy assignment operator of DiamondTrap class object is called.\n" << std::endl;
	
	return *this;
}

/**
 * @brief void	whoAmI();
 * This member function will display both its name and its ClapTrap name.
 */
void DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap displays both:\n\tits name " << YELLOW << name_ 
			<< RESET << " and\n\tits ClapTrap name is " << YELLOW << ClapTrap::_name 
			<< RESET << std::endl;
	return;
}
