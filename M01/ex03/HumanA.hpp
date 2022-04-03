#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&_weaponType;
	std::string	_name;
public:
	HumanA(std::string	name, Weapon &weaponType);
	~HumanA(void);

	Weapon		getWeaponType(void);
	std::string	getName(void);
	void		setWeaponType(std::string &weaponType);
	void		setName(std::string name);
	void		attack(void);
};

#endif
