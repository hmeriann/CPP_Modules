#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class	HumanB
{
private:
	Weapon		*_weaponType; // because it may not be set to HumanB
	std::string	_name;
public:
	HumanB(std::string name);
	~HumanB(void);

	std::string	getName(void);
	void		setName(std::string name);
	void		setWeapon(Weapon &club);
	void		attack(void);
};

#endif
