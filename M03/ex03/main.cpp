#include "DiamondTrap.hpp"

int main()
{
	ScavTrap	dent("Arthur");
	FragTrap	beeblebrox("Zaphod");
	DiamondTrap	ford("Prefect");

	dent.attack("Marvin");
	ford.takeDamage(dent.getAttackDamage());
	ford.beRepaired(10);
	dent.guardGate();
	beeblebrox.highFivesGuys();

	beeblebrox.attack("Marvin");
	ford.takeDamage(beeblebrox.getAttackDamage());
	ford.beRepaired(21);

	beeblebrox.attack("Arthur");
	dent.takeDamage(beeblebrox.getAttackDamage());
	dent.beRepaired(21);
	beeblebrox.attack("Arthur");
	dent.takeDamage(beeblebrox.getAttackDamage());

	ford.whoAmI();

	return 0;
}
