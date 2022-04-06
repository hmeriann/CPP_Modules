#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->_name = "<UNKNOWN>";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "Default constructor of ScavTrap class object is called for name " << YELLOW << this->_name
		<< RESET << " with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	// this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "🚧 Constructor of ScavTrap class object is called for name [ " << BLUE << this->_name << RESET <<
		" ] with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs) {}

ScavTrap::~ScavTrap()
{
	std::cout << MAGENTA << "Destructor of ScavTrap class object is called for [ " << this->_name << " ]\n" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << CYAN << "Copy assignment operator of ScavTrap class object is called.\n" << std::endl;
	
	return *this;
}

void	ScavTrap::guardGate()
{
	std::cout << CYAN << "ScavTrap " << this->_name << " is now in Gate keeper mode.\n" 
			<< RESET << std::endl;
	return;
}
