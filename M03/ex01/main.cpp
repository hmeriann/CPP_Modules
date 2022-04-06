#include "ScavTrap.hpp"

int main()
{
	ClapTrap	dent("Arthur");
	ScavTrap	beeblebrox("Zaphod");
	ScavTrap	noname;
	ClapTrap	paranoid("Marvin");

	dent.attack("Marvin");
	paranoid.takeDamage(dent.getAttackDamage());
	paranoid.beRepaired(10);

	noname.attack("Marvin");
	paranoid.takeDamage(noname.getAttackDamage());
	paranoid.beRepaired(10);
	beeblebrox.guardGate();

	beeblebrox.attack("Marvin");
	paranoid.takeDamage(beeblebrox.getAttackDamage());
	paranoid.beRepaired(21);

	return 0;
}