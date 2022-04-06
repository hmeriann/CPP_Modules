#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "[ default ]";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << "Default constructor is called for name " << YELLOW << this->_name
		<< RESET << " with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor is called for name [ " << CYAN << this->_name << RESET <<
		" ] with \n\tHit Points :\t[ " << this->_hitPoints <<
		" ] \n\tEnergy Points : [ " << this->_energyPoints <<
		" ] \n\tAttack Damage : [ " << this->_attackDamage << " ]\n" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) :
										_name(copy._name)
										, _hitPoints(copy._hitPoints)
										, _energyPoints(copy._energyPoints)
										, _attackDamage(copy._attackDamage)
{
	std::cout << YELLOW << "Copy constructor is called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	if (&rhs == this)
		return *this;
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;

	std::cout << CYAN << "Copy assignment operator is called" << std::endl;

	return *this;
}


ClapTrap::~ClapTrap()
{
	std::cout << RED << "Destructor is called for [ " << this->_name << " ]\n" << RESET << std::endl;
}

int	ClapTrap::getAttackDamage() const
{
	return this->_attackDamage;
}


void ClapTrap::attack(const std::string& target)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints--;
		std::cout << "ClapTrap " << MAGENTA << this->_name << RESET << " attacks "
			<< YELLOW << target << RESET << ", causing " << MAGENTA << "[ " << this->_attackDamage
			<< " ] " << RESET << "points of damage! " << std::endl;
		std::cout << "ClapTrap " << MAGENTA << this->_name << RESET << " Energy Points are now : [ " << GREEN
			<< this->_energyPoints << RESET << " ]\n" << std::endl;
	}
	else
		std::cout << RED << "You can’t do anything - no energy points left" << RESET << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints > 0)
	{
		this->_hitPoints -= amount;
		this->_attackDamage += amount;

		std::cout << "ClapTrap " << MAGENTA << this->_name << RESET << " took [ "
				<< BLUE << this->_attackDamage << RESET << " ] amount of attack damage!" << std::endl;
		std::cout << "ClapTrap " << MAGENTA << this->_name << RESET << " Hit Points are now : [ " << MAGENTA
				<< this->_hitPoints << RESET << " ]\n" << std::endl;
	}
	else
		std::cout << RED << "You can’t do anything - no hit points left" << RESET << std::endl;
	return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints > 0)
	{
		this->_energyPoints -= 1;
		this->_hitPoints += amount;

		std::cout << "ClapTrap " << MAGENTA << this->_name << RESET << " has been repared!" << std::endl;
		std::cout << "ClapTrap "  << MAGENTA << this->_name << RESET << " Energy Points are now : [ " << GREEN
				<< this->_energyPoints << RESET << " ], Hit Points are now : [ " << MAGENTA
				<< this->_hitPoints << RESET << " ]\n" << std::endl;
	}
	else
		std::cout << RED << "You can’t do anything - no energy points left" << RESET << std::endl;
	return;
}

