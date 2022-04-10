#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap {
private:
/**
 * @brief std::string	name_
 * Give to this attribute exactly the same variable’s name 
 * than the one in the ClapTrap base class.
 */
	std::string	name_;
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	virtual		~DiamondTrap();
	DiamondTrap(const DiamondTrap &copy);
	DiamondTrap	&operator=(const DiamondTrap &rhs);
	std::string	getName();

	using	ScavTrap::attack;

	void	whoAmI();
};



#endif