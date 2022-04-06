#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap	noname;
	ClapTrap	paranoid("Marvin");
	ScavTrap	dent("Arthur");
	FragTrap	beeblebrox("Zaphod");

	dent.attack("Marvin");
	paranoid.takeDamage(dent.getAttackDamage());
	paranoid.beRepaired(10);

	noname.attack("Marvin");
	paranoid.takeDamage(noname.getAttackDamage());
	paranoid.beRepaired(10);
	dent.guardGate();
	beeblebrox.highFivesGuys();

	beeblebrox.attack("Marvin");
	paranoid.takeDamage(beeblebrox.getAttackDamage());
	paranoid.beRepaired(21);

	beeblebrox.attack("Arthur");
	dent.takeDamage(beeblebrox.getAttackDamage());
	dent.beRepaired(21);
	beeblebrox.attack("Arthur");
	dent.takeDamage(beeblebrox.getAttackDamage());

	return 0;
}
