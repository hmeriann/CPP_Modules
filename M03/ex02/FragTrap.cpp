#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "<UNKNOWN>";
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default constructor of FragTrap class object is called for name " << YELLOW << this->_name
		<< RESET << " with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "🛠 Constructor of FragTrap class object is called for name [ " << GREEN << this->_name << RESET <<
		" ] with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
	return;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs) {}

FragTrap::~FragTrap()
{
	std::cout << "Destructor of FragTrap class object is called for [ " << this->_name << " ]\n" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	std::cout << CYAN << "Copy assignment operator of FragTrap class object is called.\n" << std::endl;
	
	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << CYAN << "FragTrap " << this->_name << " request a high-five 🖖\n" 
			<< RESET << std::endl;
	return;
}
