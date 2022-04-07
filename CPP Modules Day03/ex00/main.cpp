#include "ClapTrap.hpp"

int main()
{
	ClapTrap	user1("SubZero");
	ClapTrap	user2("Sonya");
	ClapTrap	looser;

	user1.attack("Sonya");
	user2.takeDamage(user1.getAttackDamage());
	user2.beRepaired(1);
	return 0;
}
