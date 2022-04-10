#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string name);
	virtual		~FragTrap();
	FragTrap(const FragTrap &copy);
	FragTrap	&operator=(const FragTrap &rhs);
	
	void highFivesGuys(void);
};



#endif